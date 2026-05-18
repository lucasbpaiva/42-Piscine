/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:05:42 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/18 17:04:47 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	put_data(void *data)
{
	if (data)
		ft_putstr((char *)data);
}

void	free_nothing(void *data)
{
	(void)data;
	return ;
}

int	main(int argc, char *argv[])
{
	t_list	*my_list;

	if (argc < 2)
		return (0);
	my_list = ft_list_push_strs(argc - 1, &argv[1]);
	ft_list_foreach(my_list, put_data);
	ft_list_clear(my_list, free_nothing);
	return (0);
}
