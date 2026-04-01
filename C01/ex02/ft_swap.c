/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 01:05:47 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/01 01:12:15 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int a = 5;
// 	int b = 3;
// 	printf("before: a = '%d', b = '%d'\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("after: a = '%d', b = '%d'\n", a, b);
// 	return (0);
// }
