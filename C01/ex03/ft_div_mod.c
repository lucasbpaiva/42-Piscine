/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 01:13:56 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/01 01:21:43 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 19;
// 	int b = 4;
// 	int q;
// 	int r;
// 	int *div = &q;
// 	int *mod = &r;

// 	ft_div_mod(a, b, div, mod);
// 	printf("%d divided by %d, quotient: %d, remainder: %d\n", a, b, q, r);
// 	return (0);
// }
