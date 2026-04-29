/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:28:26 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/29 15:41:06 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

void	print_offset(long offset, int mode)
{
	char	result[9];
	int		len;
	int		i;

	if (mode == 1)
		len = 8;
	else
		len = 7;
	result[len] = '\0';
	i = len - 1;
	while (i >= 0)
	{
		result[i] = HEX[offset % 16];
		offset = offset / 16;
		i--;
	}
	ft_putstr_fd(result, 1);
}

void	print_hex_content(unsigned char *buf, int n)
{
	int	i;

	write(1, "  ", 2);
	i = 0;
	while (i < 16)
	{
		if (i < n)
		{
			write(1, &HEX[buf[i] / 16], 1);
			write(1, &HEX[buf[i] % 16], 1);
			write(1, " ", 1);
		}
		else
			ft_putstr_fd("   ", 1);
		if (i == 7 || i == 15)
			write(1, " ", 1);
		i++;
	}
}

void	print_ascii_content(unsigned char *buf, int n)
{
	int	i;

	write(1, "|", 1);
	i = 0;
	while (i < n)
	{
		if (buf[i] >= 32 && buf[i] <= 126)
			write(1, &buf[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "|", 1);
	write(1, "\n", 1);
}

void	write_hex_byte(t_uc c)
{
	write(1, &HEX[c / 16], 1);
	write(1, &HEX[c % 16], 1);
}

void	print_hex_pairs(unsigned char *buf, int n)
{
	int	i;

	write(1, " ", 1);
	i = 0;
	while (i < 16)
	{
		if (i < n)
		{
			if (i + 1 < n)
				write_hex_byte(buf[i + 1]);
			else
				write(1, "00", 2);
			write_hex_byte(buf[i]);
		}
		else
			write(1, "    ", 4);
		if (i < 14)
			write(1, " ", 1);
		i += 2;
	}
	write(1, "\n", 1);
}
