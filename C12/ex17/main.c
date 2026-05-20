/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:11:35 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/20 11:01:37 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

// Helper to free list nodes (but not the literal strings)
void	free_list(t_list *list)
{
	t_list	*tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		free(tmp);
	}
}

int	main(void)
{
	t_list	*l1;
	t_list	*l2;

	l1 = ft_create_elem("Banana");
	l2 = ft_create_elem("Apple");
	l1->next = ft_create_elem("Date");
	l2->next = ft_create_elem("Cherry");
	l2->next->next = ft_create_elem("Elderberry");
	ft_putstr("List 1: ");
	ft_print_list(l1);
	ft_putstr("List 2: ");
	ft_print_list(l2);
	ft_sorted_list_merge(&l1, l2, ft_strcmp);
	ft_putstr("Merged: ");
	ft_print_list(l1);
	free_list(l1);
	ft_putstr("\n");
	return (0);
}
