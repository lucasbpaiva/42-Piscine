/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:04:17 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/19 12:33:58 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
	int (*cmp)())
{
	t_list	*cur_1;
	t_list	*nxt_2;
	int		(*f)(void *, void *);

	if (!begin_list1 || !begin_list2 || !cmp)
		return ;
	if (!(*begin_list1))
	{
		*begin_list1 = begin_list2;
		return ;
	}
	f = (int (*)(void *, void *))cmp;
	while (begin_list2 && f(begin_list2->data, (*begin_list1)->data) <= 0)
	{
		nxt_2 = begin_list2->next;
		begin_list2->next = *begin_list1;
		*begin_list1 = begin_list2;
		begin_list2 = nxt_2;
	}
	cur_1 = *begin_list1;
	while (cur_1->next && begin_list2)
	{
		if (f(begin_list2->data, cur_1->next->data) <= 0)
		{
			nxt_2 = begin_list2->next;
			begin_list2->next = cur_1->next;
			cur_1->next = begin_list2;
			begin_list2 = nxt_2;
		}
		cur_1 = cur_1->next;
	}
	if (begin_list2)
		cur_1->next = begin_list2;
}
