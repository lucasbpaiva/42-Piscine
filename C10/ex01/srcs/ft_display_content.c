/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_content.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:57:46 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/22 22:58:25 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

#define BUF_SIZE 4096

void	ft_display_content(int fd)
{
	int		bytes_read;
	char	buf[BUF_SIZE];

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
