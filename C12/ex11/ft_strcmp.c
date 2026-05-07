/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:51:18 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/13 16:14:52 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "Hello";
// 	s2 = "hello";
// 	printf("s1: '%s'\n", s1);
// 	printf("s2: '%s'\n", s2);
// 	printf("ft_strcmp(s1, s2): %d\n", ft_strcmp(s1, s2));
// 	return (0);
// }
