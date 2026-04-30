/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 21:42:39 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/29 22:29:39 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

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

int	main(void)
{
	int	arr[] = {42, 1337, 7};
	ft_foreach(arr, 3, ft_putnbr);
	return (0);
}
