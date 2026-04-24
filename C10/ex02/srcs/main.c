/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:07:56 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/24 15:34:53 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int	nb;
	int	fd;
	int	i;

	if (argc >= 3 && ft_strcmp(argv[1], "-c") == 0)
	{
		nb = ft_atoi(argv[2]);
		if (nb == -1)
		{
			ft_putstr_fd(argv[0], 2);
			ft_putstr_fd(": illegal offset -- ", 2);
			ft_putstr_fd(argv[2], 2);
			ft_putstr_fd(": Invalid argument", 2);
			return (0);
		}
		if (argc == 3)
		{
			display_last_n_bytes(0, nb);
			return (0);
		}
		i = 3;
		while (i < argc)
		{
			if (argc > 4)
			{
				ft_putstr_fd("==> ", 1);
				ft_putstr_fd(argv[i], 1);
				ft_putstr_fd(" <==\n", 1);
			}
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
				ft_display_error(argv[0], argv[i]);
			else
			{
				display_last_n_bytes(fd, nb);
				close(fd);
			}
			if (i != argc - 1)
				write(1, "\n", 1);
			i++;
		}
	}	
	return (0);
}
