/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:50:10 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/08 14:57:42 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;

// 	str = "Hello, World!";
// 	printf("str: '%s'\n", str);
// 	printf("strlen: %d\n", ft_strlen(str));
// 	return (0);
// }
