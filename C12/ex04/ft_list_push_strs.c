/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 22:45:49 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/05 23:06:48 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*new_elem;
	t_list	*head;

	if (!strs || size <= 0)
		return (0);
	i = 0;
	head = 0;
	while (i < size)
	{
		new_elem = ft_create_elem(strs[i]);
		if (new_elem)
		{
			new_elem->next = head;
			head = new_elem;
		}
		i++;
	}
	return (head);
}
