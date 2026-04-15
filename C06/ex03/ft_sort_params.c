/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:09:04 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/15 17:52:17 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	sort_args(char *tab[], int size)
{
	int		i;
	int		j;
	int		min_idx;
	char	*tmp;

	i = 1;
	while (i < size - 1)
	{
		j = i + 1;
		min_idx = i;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[min_idx]) < 0)
				min_idx = j;
			j++;
		}
		if (min_idx != i)
		{
			tmp = tab[i];
			tab[i] = tab[min_idx];
			tab[min_idx] = tmp;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	sort_args(argv, argc);
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
