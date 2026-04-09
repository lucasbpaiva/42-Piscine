/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:07:16 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/09 15:14:48 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	char	*is_numeric;

// 	str = "O0123456789";
// 	printf("str: '%s'\n", str);
// 	is_numeric = ft_str_is_numeric(str) == 1 ? "yes" : "no";
// 	printf("Is str numeric?: %s\n", is_numeric);
// 	return (0);
// }
