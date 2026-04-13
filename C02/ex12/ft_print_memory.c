/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 13:51:44 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/13 11:42:27 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex_address(unsigned char *addr)
{
	unsigned long long	address;
	char				*hex;
	char				result[16];
	int					i;

	address = (unsigned long long)addr;
	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		result[i] = hex[address % 16];
		address = address / 16;
		i--;
	}
	write(1, result, 16);
	write(1, ": ", 2);
}

void	print_hex_content(unsigned char *addr, unsigned int n)
{
	char			*hex;
	unsigned int	i;

	hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (i < n)
		{
			write(1, &hex[addr[i] / 16], 1);
			write(1, &hex[addr[i] % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2 != 0)
			write(1, " ", 1);
		i++;
	}
}

void	print_line(unsigned char *addr, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			write(1, &addr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;
	unsigned int	n;

	ptr = (unsigned char *)addr;
	if (size == 0)
		return (addr);
	i = 0;
	n = 16;
	while (i < size)
	{
		if (size < (i + 16))
			n = size % 16;
		print_hex_address(ptr + i);
		print_hex_content(ptr + i, n);
		print_line(ptr + i, n);
		i += 16;
	}
	return (addr);
}

// int	main(void)
// {
// 	char	str[] = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on "
// 		"peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
// 	ft_print_memory(str, sizeof(str));
// 	return (0);
// }
