/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:43:36 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/16 15:45:01 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	i;

	if (size == 0)
		return (0);
	total_len = 0;
	sep_len = ft_strlen(sep);
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i != size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*ft_str_append(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*ptr;
	int		i;

	res = malloc(sizeof(char) * (get_total_len(size, strs, sep) + 1));
	if (!res)
		return (NULL);
	if (size == 0)
	{
		res[0] = '\0';
		return (res);
	}
	i = 0;
	ptr = res;
	while (i < size)
	{
		ptr = ft_str_append(ptr, strs[i]);
		if (i != size - 1)
			ptr = ft_str_append(ptr, sep);
		i++;
	}
	return (res);
}

// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	char	*result;
// 	char	*sep = ", ";

// 	if (argc > 1)
// 	{
// 		result = ft_strjoin(argc - 1, &argv[1], sep);
// 		if (result == NULL)
// 		{
// 			printf("malloc failed\n");
// 			return (1);
// 		}
// 		printf("Joined string: '%s'\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		result = ft_strjoin(0, NULL, sep);
// 		printf("Empty case (size 0) result: '%s'\n", result);
// 		free(result);
// 	}
// 	return (0);
// }
