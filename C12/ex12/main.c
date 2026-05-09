/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 21:19:27 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/08 22:11:06 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

// Returns 0 if str has an even number of characters, length of str otherwise
int	len_cmp(char *str1, char *str2)
{
	int	len1;
	int	len2;

	len1 = 0;
	len2 = 0;
	while (str1[len1])
		len1++;
	while (str2[len2])
		len2++;
	return (len1 - len2);
}

// A custom free function that prints so we can track progress
void	debug_free(void *data)
{
	ft_putstr("Freeing data: ");
	ft_putstr((char *)data);
	ft_putstr("\n");
	free(data);
}

int	main(int argc, char *argv[])
{
	t_list	*my_list;
	void	*data_ref;

	if (argc < 2)
		return (0);
	data_ref = argv[1];
	my_list = ft_list_push_strs(argc - 1, &argv[1]);
	ft_list_reverse(&my_list);
	ft_putstr("\nOriginal list: \n");
	ft_print_list(my_list);
	printf("\nDelete nodes with same # of chars as '%s'\n", (char *)data_ref);
	ft_list_remove_if(&my_list, data_ref, len_cmp, debug_free);
	ft_print_list(my_list);
	printf("\n");
	ft_list_clear(my_list, free);
	my_list = NULL;
	return (0);
}
