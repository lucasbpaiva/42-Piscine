/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 22:40:54 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/15 23:16:16 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;
	int	len;

	if (min >= max)
		return (NULL);
	len = max - min;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	if (argc < 3)
// 		return (0);
// 	int min = atoi(argv[1]);
// 	int max = atoi(argv[2]);
// 	int *arr = ft_range(min, max);
// 	int size = max - min;
// 	if (size > 0)
// 		printf("[");
// 	for (int i = 0; i < size; i++)
// 		printf("%d%s", arr[i], (i != size - 1) ? ", " : "]\n");
// 	free(arr);
// 	return (0);
// }
