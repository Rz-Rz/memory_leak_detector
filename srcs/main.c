/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:21:20 by kdhrif            #+#    #+#             */
/*   Updated: 2023/02/13 21:14:41 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/modeling_structure_db.h"
#include "../includes/example_emp.h"

int main(int argc, char **argv)
{
	t_struct_db *struct_db = NULL;

	struct_db = calloc(1, sizeof(t_struct_db));

	static t_field_info emp_fields;
	field_info(&emp_fields);
	
	return 0;
}
