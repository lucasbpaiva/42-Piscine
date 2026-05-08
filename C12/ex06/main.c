/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 11:52:31 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/08 12:02:46 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

// A custom free function that prints so we can track progress
void	debug_free(void *data)
{
	ft_putstr("Freeing data: ");
	ft_putstr((char *)data);
	ft_putstr("\n");
	free(data);
}

int	main(void)
{
	t_list	*list;

	list = NULL;
	ft_list_push_back(&list, ft_strdup("First"));
	ft_list_push_back(&list, ft_strdup("Second"));
	ft_list_push_back(&list, ft_strdup("Third"));
	ft_putstr("--- Before Clear ---\n");
	ft_print_list(list);
	ft_putstr("\n--- Clearing List ---\n");
	ft_list_clear(list, debug_free);
	list = NULL;
	ft_putstr("\nClear complete. Check if 'Freeing data' appeared 3 times.\n");
	return (0);
}
