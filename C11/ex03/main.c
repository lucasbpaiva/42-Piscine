/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 12:42:10 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/30 13:06:56 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*));

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
	int	count;

	if (argc < 2)
		return (0);
	count = ft_count_if(&argv[1], argc - 1, is_numeric);
	printf("Number of numeric string: %d\n", count);
	return (0);
}
