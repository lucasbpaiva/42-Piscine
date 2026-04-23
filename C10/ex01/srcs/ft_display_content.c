/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_content.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 22:57:46 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/23 13:43:06 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	ft_display_content(int fd, char *prog_name, char *file_name)
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
			ft_display_error(prog_name, file_name);
			break ;
		}
		write(1, buf, bytes_read);
	}
}
