/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 22:30:02 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/08 23:03:46 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int	main(void)
{
	t_list	*list_a;
	t_list	*list_b;
	t_list	*list_c;

	list_a = NULL;
	list_b = NULL;
	list_c = NULL;
	ft_list_push_front(&list_a, "A2");
	ft_list_push_front(&list_a, "A1");
	ft_list_push_front(&list_b, "B2");
	ft_list_push_front(&list_b, "B1");
	ft_putstr("\n--- Before Merge ---\n");
	ft_putstr("List A: ");
	ft_print_list(list_a);
	ft_putstr("List B: ");
	ft_print_list(list_b);
	ft_putstr("List C: ");
	ft_print_list(list_c);
	ft_list_merge(&list_a, list_b);
	ft_putstr("\n--- After Merge ---\nList A merged with list B: ");
	ft_print_list(list_a);
	ft_list_merge(&list_c, list_b);
	ft_putstr("Empty list C merged with list B: ");
	ft_print_list(list_c);
	return (0);
}
