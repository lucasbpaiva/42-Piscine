/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:19:51 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/27 17:43:39 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_offset(long offset)
{
	char	result[9];
	int		i;

	result[8] = '\0';
	i = 7;
	while (i >= 0)
	{
		result[i] = HEX[offset % 16];
		offset = offset / 16;
		i--;
	}
	ft_putstr_fd(result, 1);
	ft_putstr_fd("  ", 1);
}
