/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 17:21:36 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/06 17:47:36 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*merge_sort(t_list *head)
{
	t_list	*second;

	if (!head || !head->next)
		return (head);
	second = split_list(head);
	head = merge_sort(head);
	second = merge_sort(second);
	return (merge(head, second));
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	if (!begin_list || !cmp)
		return ;
	begin_list = merge_sort(*begin_list);
}
