/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 12:59:31 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/17 15:47:34 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;
# define TRUE 1
# define FALSE 0

# define EVEN(nbr) (nbr % 2 == 0)

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 0

#endif

// Create a main.c file with the content below
// And compile using cc -Wall -Wextra -Werror main.c

// #include "ft_boolean.h"

// void	ft_putstr(char *str)
// {
// 	while (*str)
// 		write(1, str++, 1);
// }

// t_bool	ft_is_even(int nbr)
// {
// 	return ((EVEN(nbr)) ? TRUE : FALSE);
// }

// int	main(int argc, char **argv)
// {
// 	(void)argv;
// 	if (ft_is_even(argc - 1) == TRUE)
// 		ft_putstr(EVEN_MSG);
// 	else
// 		ft_putstr(ODD_MSG);
// 	return (SUCCESS);
// }
