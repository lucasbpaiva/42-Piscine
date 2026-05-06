/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 11:26:17 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/06 11:43:47 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

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
	return (0);
}
