/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 22:30:02 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/18 17:55:40 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	free_nothing(void *data)
{
	(void)data;
	return ;
}

int	main(void)
{
	t_list	*list_a;
	t_list	*list_b;

	list_a = NULL;
	list_b = NULL;
	ft_list_push_front(&list_a, "A2");
	ft_list_push_front(&list_a, "A1");
	ft_list_push_front(&list_b, "B2");
	ft_list_push_front(&list_b, "B1");
	ft_putstr("\n--- Before Merge ---\n");
	ft_putstr("List A: ");
	ft_print_list(list_a);
	ft_putstr("List B: ");
	ft_print_list(list_b);
	ft_list_merge(&list_a, list_b);
	ft_putstr("\n--- After Merge ---\n");
	ft_putstr("List A merged with list B: ");
	ft_print_list(list_a);
	ft_list_clear(list_a, free_nothing);
	return (0);
}
