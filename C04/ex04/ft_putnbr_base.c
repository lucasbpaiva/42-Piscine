/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:56:38 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/14 16:34:52 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_base(char *base)
{
	int	len;
	int	j;

	len = 0;
	while (base[len])
	{
		if (base[len] == '+' || base[len] == '-')
			return (0);
		if (base[len] == ' ' || (base[len] >= 9 && base[len] <= 13))
			return (0);
		j = len + 1;
		while (base[j])
		{
			if (base[j] == base[len])
				return (0);
			j++;
		}
		len++;
	}
	if (len < 2)
		return (0);
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	num;

	base_len = is_valid_base(base);
	if (base_len == 0)
		return ;
	num = nbr;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num >= base_len)
		ft_putnbr_base(num / base_len, base);
	write(1, &base[num % base_len], 1);
}

// int	main(void)
// {
// 	int		nbr;
// 	char	*base;

// 	nbr = 42;
// 	base = "0123456789ABCDEF";
// 	ft_putnbr_base(nbr, base);
// 	write(1, "\n", 1);
// 	return (0);
// }
