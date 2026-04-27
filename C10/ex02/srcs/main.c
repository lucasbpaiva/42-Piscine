/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:07:56 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/27 16:13:07 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <fcntl.h>

void	display_file_header(char *filename, int is_first)
{
	if (!is_first)
		write(1, "\n", 1);
	ft_putstr_fd("==> ", 1);
	ft_putstr_fd(filename, 1);
	ft_putstr_fd(" <==\n", 1);
}

void	process_files(int argc, char *argv[], int nb, t_info *info)
{
	int	i;
	int	fd;
	int	is_first;

	i = 3;
	while (i < argc)
	{
		info->file = argv[i];
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			ft_display_error(argv[0], argv[i]);
		else
		{
			if (argc > 4)
			{
				is_first = 0;
				if (i == 3)
					is_first = 1;
				display_file_header(argv[i], is_first);
			}
			display_last_n_bytes(fd, nb, info);
			close(fd);
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		nb;
	t_info	info;

	info.prog = argv[0];
	if (argc >= 3 && ft_strcmp(argv[1], "-c") == 0)
	{
		nb = ft_atoi(argv[2]);
		if (nb == -1)
		{
			display_offset_error(argv);
			return (0);
		}
		if (argc == 3)
		{
			info.file = "stdin";
			display_last_n_bytes(0, nb, &info);
			return (0);
		}
		process_files(argc, argv, nb, &info);
	}
	else
		display_argreq_error(argv[0]);
	return (0);
}
