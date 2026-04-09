/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:34:50 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/09 15:47:23 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	char	*is_printable;

// 	str = "Hello, World!@#$~^&*()\a\v\f";
// 	printf("str: '%s'\n", str);
// 	is_printable = ft_str_is_printable(str) == 1 ? "yes" : "no";
// 	printf("Is str printable?: %s\n", is_printable);
// 	return (0);
// }
