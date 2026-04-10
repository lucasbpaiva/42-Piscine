/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 11:33:06 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/10 13:49:08 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putchar_non_printable(char c)
{
	char			*hex;
	unsigned char	uc;

	uc = (unsigned char)c;
	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[uc / 16], 1);
	write(1, &hex[uc % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!is_printable(*str))
			ft_putchar_non_printable(*str);
		else
			write(1, str, 1);
		str++;
	}
}

// int	main(void)
// {
// 	char	*test1;
// 	char	*test2;
// 	char	*test3;

// 	test1 = "Hello\nHow are you?";
// 	test2 = "\aHello\tWorld\b";
// 	test3 = "Extended ASCII: \x81 is 129 and \xff is 255";
// 	write(1, "Test 1: ", 8);
// 	ft_putstr_non_printable(test1);
// 	write(1, "\n", 1);
// 	write(1, "Test 2: ", 8);
// 	ft_putstr_non_printable(test2);
// 	write(1, "\n", 1);
// 	write(1, "Test 3: ", 8);
// 	ft_putstr_non_printable(test3);
// 	write(1, "\n", 1);
// 	return (0);
// }
