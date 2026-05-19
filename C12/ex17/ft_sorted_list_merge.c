/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:04:17 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/19 14:26:07 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
	int (*cmp)())
{
	t_list	**curr;
	t_list	*next;
	int		(*f_cmp)(void *, void *);

	if (!begin_list1 || !begin_list2 || !cmp)
		return ;
	if (!(*begin_list1))
	{
		*begin_list1 = begin_list2;
		return ;
	}
	f_cmp = (int (*)(void *, void *))cmp;
	curr = begin_list1;
	while (begin_list2)
	{
		if (!(*curr) || f_cmp(begin_list2->data, (*curr)->data) <= 0)
		{
			next = begin_list2->next;
			begin_list2->next = *curr;
			*curr = begin_list2;
			begin_list2 = next;
		}
		curr = &((*curr)->next);
	}
}
