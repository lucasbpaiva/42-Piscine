/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 21:46:34 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/05 22:03:53 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;
	t_list	*ptr;

	if (!begin_list)
		return ;
	new_elem = ft_create_elem(data);
	if (!new_elem)
		return ;
	if (!(*begin_list))
		*begin_list = new_elem;
	else
	{
		ptr = *begin_list;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new_elem;
	}
}
