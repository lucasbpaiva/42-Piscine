/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 19:18:07 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/16 18:35:52 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_valid_base(char *base);
int		index_of(char *str, char c);
int		ft_atoi_base(char *str, char *base);

// counts the number of digits num will need to be represented in a given base 
int	count_digits_base(long num, int base_len)
{
	int		digits;

	digits = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		digits++;
	}
	while (num > 0)
	{
		digits++;
		num = num / base_len;
	}
	return (digits);
}

void	fill_result(long num, char *base, char *result, int *i)
{
	int	base_len;

	base_len = is_valid_base(base);
	if (num < 0)
	{
		result[(*i)++] = '-';
		num *= -1;
	}
	if (num >= base_len)
		fill_result(num / base_len, base, result, i);
	result[(*i)++] = base[num % base_len];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		base_to_len;
	int		digits_count;
	long	num;
	char	*result;

	base_to_len = is_valid_base(base_to);
	if (is_valid_base(base_from) == 0 || base_to_len == 0)
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	digits_count = count_digits_base(num, base_to_len);
	result = malloc(sizeof(char) * (digits_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	fill_result(num, base_to, result, &i);
	result[digits_count] = '\0';
	return (result);
}

// #include <stdio.h>
// void	test(char *nbr, char *base_from, char *base_to)
// {
// 	char	*res;

// 	res = ft_convert_base(nbr, base_from, base_to);
// 	if (res == NULL)
// 		printf("Invalid base or malloc failed\n");
// 	else
// 	{
// 		printf("Convert '%s': ", nbr);
// 		printf("from base '%s' -> to base '%s'", base_from, base_to);
// 		printf(" | Result: %s\n", res);
// 		free(res);
// 	}
// }

// int	main(void)
// {
//     printf("--- Simple Cases ---\n");
//     test("42", "0123456789", "01");              // Decimal to Binary
//     test("101010", "01", "0123456789");          // Binary to Decimal
//     test("ff", "0123456789abcdef", "0123456789"); // Hex to Decimal
//     test("  -2a", "0123456789abcdef", "01");     // Hex to Binary

//     printf("\n--- Edge Cases ---\n");
//     test("0", "0123456789", "0123456789abcdef"); // Zero
//     test("-2147483648", "0123456789", "0123456789"); // INT_MIN
//     test("2147483647", "0123456789", "0123456789");  // INT_MAX

//     printf("\n--- Invalid Bases ---\n");
//     test("10", "0", "0123456789");               // base_from too short
//     test("10", "0123456789", "0123456+");        // forbidden char on base_to
//     test("10", "011", "0123456789");             // base_from with duplicates
//     test("10", "0123456789", " ");               // base_to with spaces

//     return (0);
// }
