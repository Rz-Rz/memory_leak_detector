/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_emp.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:05:12 by kdhrif            #+#    #+#             */
/*   Updated: 2023/02/13 14:07:50 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXAMPLE_EMP_H
# define EXAMPLE_EMP_H

typedef struct s_emp_	t_emp;

struct s_emp_
{
	char			emp_name[30];
	unsigned int	emp_id;
	unsigned int	age;
	t_emp			*next;
	float			salary;
};

#endif
