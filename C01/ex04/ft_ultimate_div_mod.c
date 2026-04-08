/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:51:50 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/08 12:12:28 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b == 0)
		return ;
	temp = *a % *b;
	*a = *a / *b;
	*b = temp;
}

// #include <stdio.h>
// int main(void)
// {
// 	int	x = 5;
// 	int	y = 3;
// 	int	*a = &x;
// 	int	*b = &y;

// 	printf("Dividing %d by %d\n", x, y);
// 	ft_ultimate_div_mod(a, b);
// 	printf("Quotient: %d, Remainder: %d\n", x, y);
// 	return (0);
// }
