/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:42:02 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/22 23:08:59 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

int	main(int argc, char *argv[])
{
	int	i;
	int	fd;

	if (argc == 1)
		ft_display_content(0);
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			ft_display_error(argv[0], argv[i]);
		else
		{
			ft_display_content(fd);
			close(fd);
		}
	}
	return (0);
}
