/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 11:26:17 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/18 11:12:29 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	free_nothing(void *data)
{
	(void)data;
	return ;
}

int	main(int argc, char *argv[])
{
	int		i;
	t_list	*my_list;

	if (argc < 2)
		return (0);
	my_list = 0;
	i = 1;
	while (i < argc)
	{
		ft_list_push_back(&my_list, argv[i]);
		i++;
	}
	printf("Original list: ");
	ft_print_list(my_list);
	printf("\n");
	ft_list_reverse(&my_list);
	printf("Reversed list: ");
	ft_print_list(my_list);
	printf("\n");
	ft_list_clear(my_list, free_nothing);
	return (0);
}
