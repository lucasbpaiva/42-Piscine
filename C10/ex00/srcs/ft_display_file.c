/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:59:31 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/22 16:21:15 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft.h"

#define BUF_SIZE 4096

void	ft_display_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buf[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd(2, "Cannot read file.\n");
		return ;
	}
	while (1)
	{
		bytes_read = read(fd, buf, BUF_SIZE);
		if (bytes_read == 0)
			break ;
		if (bytes_read == -1)
		{
			ft_putstr_fd(2, "Cannot read file.\n");
			break ;
		}
		write(1, buf, bytes_read);
	}
	close(fd);
}
