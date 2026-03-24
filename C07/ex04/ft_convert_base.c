#include <stdlib.h>

int     is_valid_base(char *base);
int     index_of(char *str, char c);
int     ft_atoi_base(char *str, char *base);
char    *ft_convert_base(char *nbr, char *base_from, char *base_to);

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int nbr_decimal;

    if (!is_valid_base(base_from) || !is_valid_base(base_to))
        return (NULL);
    nbr_decimal = ft_atoi_base(nbr, base_from);
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

char *dec_to_base(char *num, char *base_to)
{

}
