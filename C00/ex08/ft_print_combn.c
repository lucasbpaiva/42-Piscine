/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 22:24:42 by lbalderr          #+#    #+#             */
/*   Updated: 2026/03/31 23:10:30 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(int *arr, int n)
{
	int		i;
	char	digit;

	i = 0;
	while (i < n)
	{
		digit = arr[i] + '0';
		write(1, &digit, 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	while (1)
	{
		print_array(arr, n);
		if (arr[0] == 10 - n)
			break ;
		write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && arr[i] == (10 - n + i))
			i--;
		arr[i]++;
		while (++i < n)
			arr[i] = arr[i - 1] + 1;
	}
	write(1, "\n", 1);
}

// int	main(void)
// {
// 	int	n;

// 	n = 2;
// 	ft_print_combn(n);
// 	return (0);
// }
