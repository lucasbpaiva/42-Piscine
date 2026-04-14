/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:09:03 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/14 15:18:27 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	num;
	char	digit;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	digit = (num % 10) + '0';
	write(1, &digit, 1);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 42;
// 	ft_putnbr(nb);
// 	write(1, "\n", 1);
// 	return (0);
// }
