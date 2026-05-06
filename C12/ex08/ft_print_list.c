/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 11:18:29 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/06 11:24:53 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_print_list(t_list *node)
{
	while (node)
	{
		printf("%s", node->data);
		if (node->next)
			printf(" -> ");
		node = node->next;
	}
	printf(" -> NULL");
}
