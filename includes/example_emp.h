/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_emp.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:05:12 by kdhrif            #+#    #+#             */
/*   Updated: 2023/02/13 20:54:17 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXAMPLE_EMP_H
# define EXAMPLE_EMP_H

typedef struct s_emp_		t_emp;
typedef struct s_student_	t_student;

struct s_student_ 
{
	char stud_name[32];
	unsigned int rollno;
	unsigned int age;
	float aggregate;
	struct student_ *best_colleague;
};

struct s_emp_
{
	char			emp_name[30];
	unsigned int	emp_id;
	unsigned int	age;
	t_emp			*next;
	float			salary;
};

#endif
