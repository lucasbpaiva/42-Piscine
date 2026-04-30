/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:11:11 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/30 16:42:49 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	get_op_index(char c)
{
	if (c == '+')
		return (0);
	if (c == '-')
		return (1);
	if (c == '*')
		return (2);
	if (c == '/')
		return (3);
	if (c == '%')
		return (4);
	else
		return (-1);
}

void	do_op(int a, int b, char op)
{
	int	(*operations[5])(int, int);
	int	index;
	int	result;

	operations[0] = add;
	operations[1] = sub;
	operations[2] = mul;
	operations[3] = div;
	operations[4] = mod;
	index = get_op_index(op);
	if (index != -1)
	{
		result = operations[index](a, b);
		ft_putnbr(result);
	}
}
