/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 21:22:51 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/06 22:34:28 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	t_list	*my_list;

	if (argc < 2)
		return (0);
	my_list = ft_list_push_strs(argc - 1, &argv[1]);
	ft_list_sort(&my_list, ft_strcmp);
	ft_print_list(my_list);
	write(1, "\n", 4);
	return (0);
}
