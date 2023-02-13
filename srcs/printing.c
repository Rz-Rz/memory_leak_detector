/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:03:17 by kdhrif            #+#    #+#             */
/*   Updated: 2023/02/13 20:19:51 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/modeling_structure_db.h"
#include "../includes/example_emp.h"

void	print_structure_rec(t_struct_db_rec *struct_rec)
{
    int j;

    if(!struct_rec) 
		return;
	j = -1;
    t_field_info *field = NULL;
	while (++j)
	{
        field = &struct_rec->fields[j];
	}
}

void print_structure_db(t_struct_db *struct_db){
    
    if(!struct_db) return;
    printf("printing STRUCURE DATABASE\n");
    int i = 0;
    struct_db_rec_t *struct_rec = NULL;
    struct_rec = struct_db->head;
    printf("No of Structures Registered = %d\n", struct_db->count);
    while(struct_rec){
        printf("structure No : %d (%p)\n", i++, struct_rec);
        print_structure_rec(struct_rec);
        struct_rec = struct_rec->next;
    }
}
