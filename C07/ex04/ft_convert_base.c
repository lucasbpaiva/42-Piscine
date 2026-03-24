#include <stdlib.h>

int     is_valid_base(char *base);
int     index_of(char *str, char c);
int     ft_atoi_base(char *str, char *base);
int     count_digits_base(int num, char *base);
char    reverse_string(char *str);
char    *ft_convert_base(char *nbr, char *base_from, char *base_to);

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int nbr_decimal;

    if (!is_valid_base(base_from) || !is_valid_base(base_to))
        return (NULL);
    nbr_decimal = ft_atoi_base(nbr, base_from);
    count_digits_base(nbr_decimal, base_to);
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
int     count_digits_base(int num, char *base)
{
    int     digits;
    int     base_len;
    long    n;

    n = num;
    digits = 0;
    base_len = is_valid_base(base);
    if (n == 0)
        return (1);
    if (n < 0)
    {
        n *= -1;
        digits++;
    }
    while (num > 0)
    {
        digits++;
        num = num / base_len;
    }
    return (digits);
}
