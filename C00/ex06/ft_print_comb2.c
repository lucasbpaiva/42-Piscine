/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 17:31:53 by lbalderr          #+#    #+#             */
/*   Updated: 2026/03/31 17:44:28 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	digits[4];

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			digits[0] = i / 10 + '0';
			digits[1] = i % 10 + '0';
			digits[2] = j / 10 + '0';
			digits[3] = j % 10 + '0';
			write(1, digits, 2);
			write(1, " ", 1);
			write(1, &digits[2], 2);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
