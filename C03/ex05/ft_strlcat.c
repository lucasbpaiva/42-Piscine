/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 22:29:37 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/13 23:15:01 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	if (dest_len == size)
		return (dest_len + src_len);
	i = 0;
	while (src[i] && i < (size - dest_len - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[20] = "Hello";
// 	char	*src = " World";

// 	// 1: Normal Concatenation
// 	unsigned int result1 = ft_strlcat(dest, src, 20);
// 	printf("Normal: '%s'\nReturn: %u\n\n", dest, result1);

// 	// 2: Truncation (Buffer too small)
// 	char	dest2[10] = "Hello";
// 	unsigned int result2 = ft_strlcat(dest2, src, 10);
// 	printf("Truncation: '%s'\nReturn: %u\n\n", dest2, result2);

// 	// 3: Size is smaller than dest_len
// 	char	dest3[20] = "Hello";
// 	unsigned int result3 = ft_strlcat(dest3, src, 3);
// 	printf("size < dest_len: '%s'\nReturn: %u\n\n", dest3, result3);

// 	return (0);
// }
