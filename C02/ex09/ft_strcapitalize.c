/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 16:38:57 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/09 17:33:49 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (ft_isalnum(str[i]))
		{
			if ((str[i] >= 'a' && str[i] <= 'z') && new_word)
				str[i] = str[i] - ('a' - 'A');
			else if ((str[i] >= 'A' && str[i] <= 'Z') && !new_word)
				str[i] = str[i] + ('a' - 'A');
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";

// 	printf("Before: '%s'\n", str);
// 	printf("After:  '%s'\n", ft_strcapitalize(str));
// 	return (0);
// }
