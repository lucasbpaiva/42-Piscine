/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:35:52 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/08 21:25:07 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
	int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*list_ptr;
	t_list	*temp;

	prev = 0;
	list_ptr = *begin_list;
	while (list_ptr)
	{
		if (((int (*)(void *, void *))cmp)(list_ptr->data, data_ref) == 0)
		{
			temp = list_ptr;
			if (prev == 0)
				*begin_list = list_ptr->next;
			else
				prev->next = list_ptr->next;
			list_ptr = list_ptr->next;
			(*free_fct)(temp->data);
			free(temp);
		}
		else
		{
			prev = list_ptr;
			list_ptr = list_ptr->next;
		}
	}	
}
