/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:26:14 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/09 15:31:30 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	char	*is_uppercase;

// 	str = "ABCDEF";
// 	printf("str: '%s'\n", str);
// 	is_uppercase = ft_str_is_uppercase(str) == 1 ? "yes" : "no";
// 	printf("Is str uppercase?: %s\n", is_uppercase);
// 	return (0);
// }
