/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 11:00:16 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/09 14:40:05 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char			dest[6];
// 	char			*src;
// 	unsigned int	n;

// 	src = "abcdefgh";
// 	n = sizeof(dest) - 1;
// 	ft_strncpy(dest, src, n);
// 	dest[n] = '\0';
// 	printf("src:  '%s'\n", src);
// 	printf("dest: '%s'\n", dest);
// 	printf("n:     %d\n", n);
// 	return (0);
// }
