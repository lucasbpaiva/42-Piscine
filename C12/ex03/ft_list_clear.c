/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 23:49:45 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/06 00:11:59 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*head;
	t_list	*next;

	if (!free_fct)
		return ;
	head = begin_list;
	while (head)
	{
		next = head->next;
		free_fct(head->data);
		free(head);
		head = next;
	}
}
