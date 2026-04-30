/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:57:17 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/30 12:08:07 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*));

int	is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	if (ft_any(&argv[1], is_numeric))
		printf("At least one string is numeric\n");
	else
		printf("None of the strings is numeric\n");
	return (0);
}
