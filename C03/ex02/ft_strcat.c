/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:29 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/13 16:39:35 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	i = 0;
	while (src[i])
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
//     char dest[50] = "Hello, "; 
//     char *src = "World!";

// 	printf("dest: '%s'\n", dest);
// 	printf("src: '%s'\n", src);
//     printf("ft_strcat(dest, src): '%s'\n", ft_strcat(dest, src));
//     return (0);
// }
