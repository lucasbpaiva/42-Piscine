/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:40:25 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/15 11:58:08 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	i = nb;
	if (nb % 2 == 0)
		i++;
	while (!ft_is_prime(i))
		i += 2;
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	nb = 42;
// 	printf("next prime >= %d is %d\n", nb, ft_find_next_prime(nb));
// 	return (0);
// }
