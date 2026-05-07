/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 11:26:17 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/07 17:15:24 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	t_list	*my_list;

	if (argc < 2)
		return (0);
	my_list = ft_list_push_strs(argc - 1, &argv[1]);
	ft_putstr("Original list: ");
	ft_print_list(my_list);
	ft_list_reverse_fun(my_list);
	ft_putstr("Reversed list: ");
	ft_print_list(my_list);
	return (0);
}
