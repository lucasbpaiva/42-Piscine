/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:54:06 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/08 16:12:26 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_idx;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min_idx = i;
		while (j < size)
		{
			if (tab[j] < tab[min_idx])
				min_idx = j;
			j++;
		}
		if (min_idx != i)
		{
			tmp = tab[i];
			tab[i] = tab[min_idx];
			tab[min_idx] = tmp;
		}
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	tab[] = {5, 4, 3, 2, 1};
// 	int	size = sizeof(tab) / sizeof(int);

// 	printf("Array (original): [");
// 	for (int i = 0; i < size; i++)
// 		printf("%d%s", tab[i], i < size - 1 ? ", " : "]\n");
// 	ft_sort_int_tab(tab, size);
// 	printf("Array (sorted): [");
// 	for (int i = 0; i < size; i++)
// 		printf("%d%s", tab[i], i < size - 1 ? ", " : "]\n");
// 	return (0);
// }
