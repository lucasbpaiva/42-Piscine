/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 17:01:35 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/06 17:16:42 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*ptr;

	if (!begin_list1 || !begin_list2)
		return ;
	if (!(*begin_list1))
	{
		*begin_list1 = begin_list2;
		return ;
	}
	ptr = *begin_list1;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = begin_list2;
}
