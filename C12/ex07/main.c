/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 15:28:55 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/08 15:52:36 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	print_node(t_list *node)
{
	if (node)
		ft_putstr((char *)node->data);
	else
		ft_putstr("NULL");
	ft_putstr("\n");
}

int	main(int argc, char *argv[])
{
	t_list	*my_list;

	if (argc < 2)
		return (0);
	my_list = ft_list_push_strs(argc - 1, &argv[1]);
	ft_list_reverse(&my_list);
	ft_putstr("\n");
	ft_print_list(my_list);
	ft_putstr("\nNode at index 0: ");
	print_node(ft_list_at(my_list, 0));
	ft_putstr("Node at index 1: ");
	print_node(ft_list_at(my_list, 1));
	ft_putstr("Node at index 2: ");
	print_node(ft_list_at(my_list, 2));
	ft_putstr(".\n.\n.\n");
	ft_putstr("Node at index 200: ");
	print_node(ft_list_at(my_list, 200));
	return (0);
}
