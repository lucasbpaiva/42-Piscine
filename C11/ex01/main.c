/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:17:31 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/30 11:42:19 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int));

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

int	ft_square(int x)
{
	return (x * x);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size;
	int	*mapped;

	size = sizeof(tab) / sizeof(int);
	mapped = ft_map(tab, size, ft_square);
	if (!mapped)
	{
		printf("Malloc failed\n");
		return (1);
	}
	printf("Original: ");
	print_array(tab, size);
	printf("\n");
	printf("Mapped: ");
	print_array(mapped, size);
	printf("\n");
	free(mapped);
	return (0);
}
