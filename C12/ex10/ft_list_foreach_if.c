/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:59:38 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/08 16:52:47 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
	void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	if (!f || !cmp || !begin_list)
		return ;
	list_ptr = begin_list;
	while (list_ptr)
	{
		if (((int (*)(void *, void *))cmp)(list_ptr->data, data_ref) == 0)
			(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
