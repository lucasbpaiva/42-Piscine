/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 11:14:11 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/08 11:24:33 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(int argc, char *argv[])
{
	t_list	*my_list;
	t_list	*last_elem;

	if (argc < 2)
		return (0);
	my_list = ft_list_push_strs(argc - 1, &argv[1]);
	ft_print_list(my_list);
	last_elem = ft_list_last(my_list);
	ft_putstr("Last element: ");
	ft_putstr((char *)last_elem->data);
	ft_putstr("\n");
	return (0);
}
