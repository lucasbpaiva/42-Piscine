/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 21:51:41 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/15 22:38:03 by lbalderr         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	cpy = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*src;
// 	char	*cpy;

// 	src = "Hello, World!";
// 	cpy = ft_strdup(src);
// 	printf("Original: %s (Address: %p)\n", src, (void*)src);
// 	printf("Copy:     %s (Address: %p)\n", cpy, (void*)cpy);
// 	free(cpy);
// 	return (0);
// }
