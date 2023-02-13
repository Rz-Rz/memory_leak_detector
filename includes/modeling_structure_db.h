/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modeling_structure_db.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:50:54 by kdhrif            #+#    #+#             */
/*   Updated: 2023/02/13 21:18:23 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODELING_STRUCTURE_DB_H
# define MODELING_STRUCTURE_DB_H

# define MAX_STRUCTURE_NAME_SIZE 128
# define MAX_FIELD_NAME_SIZE 128
# include <assert.h>
# include <memory.h>
# include <stdio.h>
# include <stdlib.h>

typedef enum e_field_type
{
	UINT8,
	UINT32,
	INT32,
	CHAR,
	OBJ_PTR,
	FLOAT,
	DOUBLE,
	OBJ_STRUCT
}			t_data_type;

typedef enum e_struct_type
{
	emp,
	student
}			t_struct_type;

typedef enum e_types
{
	STRUCT,
	ENUM,
	PRIMITIVE
}			t_types;

#define OFFSETOF(struct_name, fld_name) \
	(unsigned int)&(((struct_name *)0)->fld_name)
#define FIELDSIZE(struct_name, fld_name) \
	sizeof(((struct_name *)0)->fld_name)

typedef struct s_struct_db_rec_	t_struct_db_rec;
typedef struct s_field_info_		t_field_info;

typedef struct s_struct_db_ {
	t_struct_db_rec	*struct_db_head;
	int				nb_struct;
}				t_struct_db;

/* Structure to store the information of one C structure which could
 * have n_field fields. */
struct s_struct_db_rec_ {
	t_struct_db_rec	*next; /* Pointer to the next structure in the list */
	char			struct_name[MAX_STRUCTURE_NAME_SIZE]; // key
	unsigned int	ds_size; /* Size of the structure */
	unsigned int	n_fields; /* Number of fields in the structure */
	t_field_info	*fields; /* Pointer to the array of fields */
};

/* Structure to store the information of one field of a C structure */
struct s_field_info_ {
	char			field_name[MAX_FIELD_NAME_SIZE]; /* Name of the field */
	unsigned int	size; /* Size of the field */
	unsigned int	offset; /* Offset of the field from the start of the structure */
	t_data_type		dtype; /* Data type of the field */
	char			nested_str_name[MAX_STRUCTURE_NAME_SIZE]; /* This is meaningful only if dtype = OBJ_PTR or OBJ_STRUCT */
};

#endif
