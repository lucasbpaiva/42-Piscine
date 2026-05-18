/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 18:26:35 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/18 18:18:15 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	free_nothing(void *data)
{
	(void)data;
	return ;
}

int	main(int argc, char *argv[])
{
	t_list	*my_list;
	char	*word_to_insert;

	word_to_insert = "FORTY-TWO";
	if (argc < 2)
		return (0);
	my_list = ft_list_push_strs(argc - 1, &argv[1]);
	ft_list_sort(&my_list, ft_strcmp);
	ft_putstr("Original list (sorted)\n");
	ft_print_list(my_list);
	ft_sorted_list_insert(&my_list, word_to_insert, ft_strcmp);
	ft_putstr("With inserted word\n");
	ft_print_list(my_list);
	ft_list_clear(my_list, free_nothing);
	return (0);
}
