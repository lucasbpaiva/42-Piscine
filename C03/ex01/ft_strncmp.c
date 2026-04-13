/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:45:10 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/13 16:15:04 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	int		n;

// 	s1 = "abcdef";
// 	s2 = "abcghi";
// 	n = 3;
// 	printf("s1: '%s'\n", s1);
// 	printf("s2: '%s'\n", s2);
// 	printf("ft_strncmp(s1, s2, %d): %d\n", n, ft_strncmp(s1, s2, n));
// 	return (0);
// }
