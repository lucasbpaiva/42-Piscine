/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:41:59 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/13 17:02:00 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char dest[50] = "Hello, "; 
// 	char *src = "World!";
// 	int	n = 3;

// 	printf("dest: '%s'\n", dest);
// 	printf("src: '%s'\n", src);
// 	printf("ft_strncat(dest, src, %d): '%s'\n", n, ft_strncat(dest, src, n));
// 	return (0);
// }
