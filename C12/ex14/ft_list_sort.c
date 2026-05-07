/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 17:21:36 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/06 21:35:22 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*split_list(t_list *head)
{
	t_list	*fast;
	t_list	*slow;
	t_list	*temp;

	fast = head;
	slow = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		if (fast)
			slow = slow->next;
	}
	temp = slow->next;
	slow->next = 0;
	return (temp);
}

t_list	*merge_lists(t_list *first, t_list *second,
	int (*cmp)(void *data1, void *data2))
{
	if (!first)
		return (second);
	if (!second)
		return (first);
	if ((*cmp)(first->data, second->data) < 0)
	{
		first->next = merge_lists(first->next, second, cmp);
		return (first);
	}
	else
	{
		second->next = merge_lists(first, second->next, cmp);
		return (second);
	}
}

t_list	*merge_sort(t_list *head, int (*cmp)(void *data1, void *data2))
{
	t_list	*second;

	if (!head || !head->next)
		return (head);
	second = split_list(head);
	head = merge_sort(head, cmp);
	second = merge_sort(second, cmp);
	return (merge_lists(head, second, cmp));
}

void	ft_list_sort(t_list **begin_list, int (*cmp)(void *data1, void *data2))
{
	if (!begin_list || !cmp)
		return ;
	*begin_list = merge_sort(*begin_list, cmp);
}
