/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 16:39:39 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/17 17:12:44 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point {
	int	x;
	int	y;
}	t_point;

#endif

/* Create a main.c file with the content below
and compile using cc -Wall -Wextra -Werror main.c */

// #include "ft_point.h"
// #include <stdio.h>

// void	set_point(t_point *point)
// {
// 	point->x = 42;
// 	point->y = 21;
// }

// int	main(void)
// {
// 	t_point	point;

// 	set_point(&point);
// 	printf("point.x: %d\n", point.x);
// 	printf("point.y: %d\n", point.y);
// 	return (0);
// }
