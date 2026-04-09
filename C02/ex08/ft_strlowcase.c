/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 16:32:44 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/09 16:36:42 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ('a' - 'A');
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = "CALM DOWN";

// 	printf("str: '%s'\n", str);
// 	printf("str in lowercase: '%s'\n", ft_strlowcase(str));
// 	return (0);
// }
