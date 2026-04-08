/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:10:00 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/08 15:51:00 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	tab[] = {1, 2, 3, 4, 5};
// 	int	size = sizeof(tab) / sizeof(int);

// 	printf("Array (original): [");
// 	for (int i = 0; i < size; i++)
// 		printf("%d%s", tab[i], i < size - 1 ? ", " : "]\n");
// 	ft_rev_int_tab(tab, size);
// 	printf("Array (reversed): [");
// 	for (int i = 0; i < size; i++)
// 		printf("%d%s", tab[i], i < size - 1 ? ", " : "]\n");
// 	return (0);
// }
