/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:19:51 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/28 15:53:32 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>
#include <fcntl.h>

#define SIZE 16

void	close_current_file(t_stream *s)
{
	close(s->fd);
	s->fd = -1;
	s->curr_arg++;
}

int	get_next_chunk(t_stream *s, unsigned char *buf)
{
	int		bytes_read;
	int		total_collected;
	char	*curr_file;

	total_collected = 0;
	while (total_collected < SIZE && s->curr_arg < s->argc)
	{
		if (s->fd == -1)
		{
			curr_file = s->argv[s->curr_arg];
			s->fd = open(curr_file, O_RDONLY);
			if (s->fd == -1)
			{
				ft_display_error(s->argv[0], curr_file);
				s->curr_arg++;
				continue ;
			}
		}
		bytes_read = read(s->fd, buf + total_collected, SIZE - total_collected);
		if (bytes_read <= 0)
			close_current_file(s);
		else
			total_collected += bytes_read;
	}
	return (total_collected);
}

void	ft_hexdump(t_stream *s)
{
	unsigned char	buf[SIZE];
	int				n;

	n = get_next_chunk(s, buf);
	while (n > 0)
	{
		print_offset(s->offset);
		print_hex_content(buf, n);
		print_ascii_content(buf, n);
		s->offset += n;
		n = get_next_chunk(s, buf);
	}
	if (s->offset > 0)
	{
		print_offset(s->offset);
		ft_putstr_fd("\n", 1);
	}
}
