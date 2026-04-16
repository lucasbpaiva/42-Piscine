/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 23:17:51 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/16 11:41:52 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (!(*range))
		return (-1);
	i = 0;
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	int	*arr;

// 	if (argc < 3)
// 		return (0);
// 	int min = atoi(argv[1]);
// 	int max = atoi(argv[2]);
// 	int size = ft_ultimate_range(&arr, min, max);
// 	if (size > 0)
// 		printf("[");
// 	for (int i = 0; i < size; i++)
// 		printf("%d%s", arr[i], (i != size - 1) ? ", " : "]\n");
// 	free(arr);
// 	return (0);
// }
