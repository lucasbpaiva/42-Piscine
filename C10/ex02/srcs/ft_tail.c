/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:06:02 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/24 17:05:47 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft.h"

int	load_buf(int fd, int nb, char *buf, t_info *info)
{
	char	tmp[4096];
	int		index;
	int		bytes_read;
	int		i;

	index = 0;
	while (1)
	{
		bytes_read = read(fd, tmp, 4096);
		if (bytes_read == 0)
			break ;
		if (bytes_read == -1)
		{
			ft_display_error(info->prog, info->file);
			return (-1);
		}
		i = 0;
		while (i < bytes_read)
		{
			buf[index % nb] = tmp[i];
			index++;
			i++;
		}
	}
	return (index);
}

void	display_last_n_bytes(int fd, int nb, t_info *info)
{
	char	*buf;
	int		bytes_read;
	int		tail_start;

	if (nb <= 0)
		return ;
	buf = malloc(sizeof(char) * nb);
	if (!buf)
		return ;
	bytes_read = load_buf(fd, nb, buf, info);
	if (bytes_read != -1)
	{
		if (bytes_read < nb)
			write(1, buf, bytes_read);
		else
		{
			tail_start = bytes_read % nb;
			write(1, &buf[tail_start], nb - tail_start);
			write(1, buf, tail_start);
		}
	}
	free(buf);
}
