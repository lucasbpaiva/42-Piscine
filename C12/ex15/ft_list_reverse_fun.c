/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:19:09 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/07 17:16:55 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*ptr;

	size = 0;
	ptr = begin_list;
	while (ptr)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}

t_list	*ft_list_at(t_list *begin_list, int nbr)
{
	int		i;
	t_list	*ptr;

	i = 0;
	ptr = begin_list;
	while (ptr && i < nbr)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

void	swap_list_data(t_list *node_a, t_list *node_b)
{
	void	*temp;

	temp = node_a->data;
	node_a->data = node_b->data;
	node_b->data = temp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		i;
	int		size;
	t_list	*node_a;
	t_list	*node_b;

	if (!begin_list)
		return ;
	size = ft_list_size(begin_list);
	i = 0;
	while (i < size / 2)
	{
		node_a = ft_list_at(begin_list, i);
		node_b = ft_list_at(begin_list, size - 1 - i);
		swap_list_data(node_a, node_b);
		i++;
	}
}
