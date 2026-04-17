/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 22:09:05 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/16 22:39:00 by lbalderr         ###   ########.fr       */
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

	result = malloc(sizeof(char *) * count_words(str, charset));
}
