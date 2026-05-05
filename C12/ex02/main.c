/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 14:37:59 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/05 14:43:44 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int	main(void)
{
	t_list	*my_list;

	my_list = NULL;
	ft_list_push_front(&my_list, "Node 3");
	ft_list_push_front(&my_list, "Node 2");
	ft_list_push_front(&my_list, "Node 1");
	printf("List size: %d\n", ft_list_size(my_list));
	return (0);
}
