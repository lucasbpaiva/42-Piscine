/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:31:40 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/07 12:01:31 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	simpler_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*ptr;
	t_list	*mv_ptr;
	void	*temp;

	if (!begin_list || !(*begin_list) || !cmp)
		return ;
	ptr = *begin_list;
	while (ptr)
	{
		mv_ptr = ptr->next;
		while (mv_ptr)
		{
			if (((int (*)(void *, void *))cmp)(ptr->data, mv_ptr->data) > 0)
			{
				temp = ptr->data;
				ptr->data = mv_ptr->data;
				mv_ptr->data = temp;
			}
			mv_ptr = mv_ptr->next;
		}
		ptr = ptr->next;
	}
}
