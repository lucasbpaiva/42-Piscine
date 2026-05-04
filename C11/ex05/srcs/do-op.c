/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:11:11 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/04 12:56:36 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

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

void	do_op(int a, int b, char *op)
{
	int	(*operations[5])(int, int);
	int	index;

	operations[0] = add;
	operations[1] = sub;
	operations[2] = mul;
	operations[3] = div;
	operations[4] = mod;
	if (ft_strlen(op) != 1)
	{
		write(1, "0", 1);
		return ;
	}
	index = get_op_index(op[0]);
	if (index == -1)
		write(1, "0", 1);
	else if (index == 3 && b == 0)
		ft_putstr_fd("Stop : division by zero", 1);
	else if (index == 4 && b == 0)
		ft_putstr_fd("Stop : modulo by zero", 1);
	else
		ft_putnbr(operations[index](a, b));
}
