/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 22:21:24 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/14 22:57:26 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	left;
	long	right;
	long	mid;
	long	sq;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	left = 0;
	right = nb / 2;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		sq = mid * mid;
		if (sq == nb)
			return (mid);
		if (sq > nb)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	nb = 2147395600; 
// 	//sqrt(2147395600) = 46340
// 	printf("sqrt(%d) = %d\n", nb, ft_sqrt(nb));
// 	return (0);
// }
