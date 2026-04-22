/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 22:09:05 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/22 12:26:18 by lbalderr         ###   ########.fr       */
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

int	ft_includes(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	new_word;

	count = 0;
	new_word = 1;
	while (*str)
	{
		if (new_word && !ft_includes(charset, *str))
		{
			count++;
			new_word = 0;
		}
		if (ft_includes(charset, *str))
			new_word = 1;
		str++;
	}
	return (count);
}

char	*ft_strndup(char *src, int n)
{
	char	*cpy;
	int		i;

	cpy = malloc(sizeof(char) * (n + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (src[i] && i < n)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		start;
	int		i;
	int		j;

	result = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && ft_includes(charset, str[i]))
			i++;
		if (str[i])
		{
			start = i;
			while (str[i] && !ft_includes(charset, str[i]))
				i++;
			result[j++] = ft_strndup(&str[start], i - start);
		}
	}
	result[j] = NULL;
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**result;
// 	int		i;

// 	result = ft_split("  Hello  world from 42  ", " ");
// 	if (!result)
// 		return (1);

// 	printf("[");
// 	i = 0;
// 	while (result[i])
// 	{
// 		if (i > 0)
// 			printf(", ");
// 		printf("'%s'", result[i]);
// 		i++;
// 	}
// 	printf("]\n");

// 	i = 0;
// 	while (result[i])
// 		free(result[i++]); // Free the memory from ft_strndup
// 	free(result); // Free the memory from ft_split

// 	return (0);
// }
