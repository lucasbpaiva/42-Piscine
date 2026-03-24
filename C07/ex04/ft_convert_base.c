#include <stdlib.h>

int     is_valid_base(char *base);
int     ft_atoi_base(char *str, char *base);
char    *ft_convert_base(char *nbr, char *base_from, char *base_to);

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    if (!is_valid_base(base_from) || !is_valid_base(base_to))
        return (NULL);
    //skip spaces
    // process signal
    while (nbr[i] in base_from)
    {
        /* code */
    }
    
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

}

char *dec_to_base(char *num, char *base_to)
{

}
