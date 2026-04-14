/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:38:39 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/14 17:06:46 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns length of base, or 0 if base is invalid
int	is_valid_base(char *base)
{
	int	len;
	int	j;

	len = 0;
	while (base[len])
	{
		if (base[len] == '+' || base[len] == '-')
			return (0);
		if (base[len] == ' ' || (base[len] >= 9 && base[len] <= 13))
			return (0);
		j = len + 1;
		while (base[j])
		{
			if (base[j] == base[len])
				return (0);
			j++;
		}
		len++;
	}
	if (len < 2)
		return (0);
	return (len);
}

// returns index of first occurrence of c in str, or -1 if c is not in str
int	index_of(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	signal;
	int	result;

	base_len = is_valid_base(base);
	if (base_len == 0)
		return (0);
	signal = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (index_of(base, *str) != -1)
	{
		result = (result * base_len) + index_of(base, *str);
		str++;
	}
	return (signal * result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*base;
// 	char	*str;

// 	base = "0123456789ABCDEF";
// 	str = "2A";
// 	printf("base: '%s'\n", base);
// 	printf("'%s' -> %d\n", str, ft_atoi_base(str, base));
// 	return (0);
// }
