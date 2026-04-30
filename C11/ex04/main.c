/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:19:43 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/30 15:32:33 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

void	print_array(int *tab, int size)
{
	int	i;

	if (size == 0)
		return ;
	printf("[");
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("]");
}

int	greater_than(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	length;
	int	is_sorted;

	length = sizeof(tab) / sizeof(int);
	print_array(tab, length);
	printf("\n");
	is_sorted = ft_is_sort(tab, length, greater_than);
	if (is_sorted)
		printf("Array is sorted.\n");
	else
		printf("Array is not sorted.\n");
	return (0);
}
