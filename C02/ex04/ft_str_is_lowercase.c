/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:16:11 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/09 15:22:53 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	char	*is_lowercase;

// 	str = "abc def";
// 	printf("str: '%s'\n", str);
// 	is_lowercase = ft_str_is_lowercase(str) == 1 ? "yes" : "no";
// 	printf("Is str lowercase?: %s\n", is_lowercase);
// 	return (0);
// }
