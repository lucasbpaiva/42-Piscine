/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:26:26 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/28 17:33:09 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	is_same_buf(unsigned char *buf1, unsigned char *buf2)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (buf1[i] != buf2[i])
			return (0);
		i++;
	}
	return (1);
}

void	copy_buf(unsigned char *dest, unsigned char *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}	
}
