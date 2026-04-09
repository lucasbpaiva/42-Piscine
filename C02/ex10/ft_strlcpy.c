/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:36:20 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/09 18:21:05 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// #include <stdio.h>

// void	test_strlcpy(char *src, unsigned int size)
// {
// 	char			dest[20];
// 	unsigned int	result;

// 	printf("src: '%s', size: %u\n", src, size);
// 	result = ft_strlcpy(dest, src, size);
// 	printf("dest: '%s', return: %u\n", dest, result);
// 	printf("----------------------------\n");
// }

// int	main(void)
// {
// 	test_strlcpy("Hello", 10);
// 	test_strlcpy("TruncateMe", 5);
// 	test_strlcpy("ABCD", 1);
// 	test_strlcpy("Guard", 0);
// 	return (0);
// }
