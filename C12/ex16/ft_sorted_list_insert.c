/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:24:03 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/07 18:23:01 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*ptr;
	t_list	*new_elem;

	new_elem = ft_create_elem(data);
	if (!begin_list || !cmp || !new_elem)
		return ;
	ptr = *begin_list;
	if (!ptr || ((int (*)(void *, void *))cmp)(ptr->data, data) >= 0)
	{
		new_elem->next = ptr;
		*begin_list = new_elem;
		return ;
	}
	while (ptr->next)
	{
		if (((int (*)(void *, void *))cmp)(ptr->next->data, data) > 0)
		{
			new_elem->next = ptr->next;
			ptr->next = new_elem;
			return ;
		}
		ptr = ptr->next;
	}
	new_elem->next = 0;
	ptr->next = new_elem;
}
