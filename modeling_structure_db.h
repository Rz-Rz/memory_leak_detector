/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modeling_structure_db.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:50:54 by kdhrif            #+#    #+#             */
/*   Updated: 2023/02/13 16:38:14 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODELING_STRUCTURE_DB_H
# define MODELING_STRUCTURE_DB_H

# define MAX_STRUCTURE_NAME_SIZE 128
# define MAX_FIELD_NAME_SIZE 128

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

typedef enum e_types
{
	STRUCT,
	ENUM,
	PRIMITIVE
}			t_types;

typedef struct s_struct_db_rec_	t_struct_db_rec;
typedef struct s_fied_info_		t_field_info;

struct s_struct_db_rec_ {
	t_struct_db_rec	*next;
	char			struct_name[MAX_STRUCTURE_NAME_SIZE];
	unsigned int	ds_size;
	unsigned int	n_fields;
	t_field_info	*fields;
};

struct s_fied_info_ {
	char			field_name[MAX_FIELD_NAME_SIZE];
	unsigned int	size;
	unsigned int	offset;
	t_data_type		dtype;
	char			nested_str_name[MAX_STRUCTURE_NAME_SIZE];
};

#endif
