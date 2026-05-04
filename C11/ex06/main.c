/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:20:11 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/04 15:24:30 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_string_tab(char **tab);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_string_tab(&argv[1]);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
