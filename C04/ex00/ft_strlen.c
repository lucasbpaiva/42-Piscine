/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:52:26 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/14 14:59:25 by lbalderr         ###   ########.fr       */
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

// 	str = "Hello World";
// 	printf("'%s', length: %d\n", str, ft_strlen(str));
// 	return (0);
// }
