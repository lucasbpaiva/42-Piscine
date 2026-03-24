#include <stdlib.h>

int     is_valid_base(char *base);
int     index_of(char *str, char c);
int     ft_atoi_base(char *str, char *base);
int     count_digits_base(int num, int base_len);
char    *ft_convert_base(char *nbr, char *base_from, char *base_to);

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nbr_decimal;
	int     digits_count;
	int     base_to_len;
	char    *result;

	base_to_len = is_valid_base(base_to);
	if (!is_valid_base(base_from) || !base_to_len) return (NULL);
	nbr_decimal = ft_atoi_base(nbr, base_from);
	digits_count = count_digits_base(nbr_decimal, base_to_len);
	result = malloc(sizeof(char) * (digits_count + 1));
	if (!result) return (NULL);
	result[digits_count] = '\0';
	if (nbr_decimal < 0)
	{
		result[0] = '-';
		nbr_decimal *= -1;
	}
	if (nbr_decimal == 0)
		result[0] = base_to[0];
	while (nbr_decimal > 0)
	{
		result[--digits_count] = base_to[nbr_decimal % base_to_len];
		nbr_decimal = nbr_decimal / base_to_len;
	}
	return (result);
}

// checks if base is valid and returns its length, or 0 if not valid
int     is_valid_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

// takes a string representing a number in a given base and converts it to a base 10 int
int     ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int result;
	int base_len;

	i = 0;
	sign = 1;
	result = 0;
	base_len = is_valid_base(base);
	if (base_len == 0)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (index_of(base, str[i]) != -1)
	{
		result = result * base_len + index_of(base, str[i]);
		i++;
	}
	return (sign * result);
}

// returns index of c in str, or -1 if c is not in str
int     index_of(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

// counts the number of digits num will need to be represented in a given base 
int     count_digits_base(int num, int base_len)
{
	int     digits;
	long    n;

	n = num;
	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		digits++;
	}
	while (n > 0)
	{
		digits++;
		n = n / base_len;
	}
	return (digits);
}

#include <stdio.h>
void    test(char *nbr, char *base_from, char *base_to)
{
    char *res;

    res = ft_convert_base(nbr, base_from, base_to);
    if (res == NULL)
        printf("Invalid base or malloc failed\n");
    else
    {
        printf("Convert '%s': from base '%s' -> to base '%s' | Result: %s\n", nbr, base_from, base_to, res);
        free(res);
    }
}

int     main(void)
{
    printf("--- Simple Cases ---\n");
    test("42", "0123456789", "01");              // Decimal to Binary
    test("101010", "01", "0123456789");          // Binary to Decimal
    test("ff", "0123456789abcdef", "0123456789"); // Hex to Decimal
    test("  -2a", "0123456789abcdef", "01");     // Hex to Binary

    printf("\n--- Edge Cases ---\n");
    test("0", "0123456789", "0123456789abcdef"); // Zero
    test("-2147483648", "0123456789", "0123456789"); // INT_MIN
    test("2147483647", "0123456789", "0123456789");  // INT_MAX

    printf("\n--- Invalid Bases ---\n");
    test("10", "0", "0123456789");               // base_from too short
    test("10", "0123456789", "0123456+");        // forbidden char on base_to
    test("10", "011", "0123456789");             // base_from with duplicates
    test("10", "0123456789", " ");               // base_to with spaces

    return (0);
}
