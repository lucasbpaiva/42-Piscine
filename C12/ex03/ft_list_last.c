/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 14:50:33 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/05 16:02:21 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*ptr;

	if (!begin_list)
		return (0);
	ptr = begin_list;
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
