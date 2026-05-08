/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 11:18:29 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/07 17:09:40 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_print_list(t_list *node)
{
	while (node)
	{
		ft_putstr((char *)node->data);
		if (node->next)
			ft_putstr(" -> ");
		node = node->next;
	}
	ft_putstr(" -> NULL\n");
}
