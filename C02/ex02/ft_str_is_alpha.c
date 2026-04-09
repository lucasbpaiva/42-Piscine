/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 14:42:03 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/09 15:04:52 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			str++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	char	*is_alpha;

// 	str = "HelloWorld";
// 	printf("str: '%s'\n", str);
// 	is_alpha = ft_str_is_alpha(str) == 1 ? "yes" : "no";
// 	printf("Is str alpha?: %s\n", is_alpha);
// 	return (0);
// }
