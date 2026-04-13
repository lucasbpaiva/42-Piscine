/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:05:53 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/13 19:35:54 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*haystack;
// 	char	*needle1;
// 	char	*needle2;
// 	char	*needle3;

// 	haystack = "Hello World";
// 	needle1 = "Wor";
// 	needle2 = "";
// 	needle3 = "42";
// 	printf("Haystack: '%s'\n", haystack);
// 	printf("'%s': %s\n", needle1, ft_strstr(haystack, needle1));
// 	printf("'%s': %s\n", needle2, ft_strstr(haystack, needle2));
// 	printf("'%s': %s\n", needle3, ft_strstr(haystack, needle3));
// 	return (0);
// }
