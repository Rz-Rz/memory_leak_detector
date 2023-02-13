/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   offset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:10:59 by kdhrif            #+#    #+#             */
/*   Updated: 2023/02/13 18:42:46 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/modeling_structure_db.h"
#include "../includes/example_emp.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned long offset_of_1(void *ptr, void *field)
{
	return ((unsigned long)field - (unsigned long)ptr);
}

unsigned int offset_of_2(const void *ptr, const char *fld_name)
{
	const char *base = (const char *)ptr;
	const char *field = (const char *)&base[ft_strlen((char *)fld_name)];
	return ((unsigned int) (field - base));
}

/* unsigned int offsetof_function(struct struct_name *ptr, const char *fld_name) { */
/*     struct struct_name *null_ptr = (struct struct_name *) 0; */
/*     return (unsigned int) &(null_ptr->fld_name) - (unsigned int) ptr; */
/* } */
