/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:10:06 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/18 17:16:59 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

// Returns 0 if str has an even number of characters, length of str otherwise
int	len_cmp(char *str1, char *str2)
{
	int	len1;
	int	len2;

	len1 = 0;
	len2 = 0;
	while (str1[len1])
		len1++;
	while (str2[len2])
		len2++;
	return (len1 - len2);
}

// Modifies the string to be ALL CAPS
void	make_uppercase(void *data)
{
	char	*str;

	str = (char *)data;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - ('a' - 'A');
		str++;
	}
}

void	free_nothing(void *data)
{
	(void)data;
	return ;
}

int	main(int argc, char *argv[])
{
	t_list	*my_list;
	void	*data_ref;

	if (argc < 2)
		return (0);
	data_ref = argv[1];
	my_list = ft_list_push_strs(argc - 1, &argv[1]);
	ft_list_reverse(&my_list);
	ft_putstr("\nOriginal list: \n");
	ft_print_list(my_list);
	printf("\nTransform nodes with same # of chars as '%s'\n", (char *)data_ref);
	ft_list_foreach_if(my_list, make_uppercase, data_ref, len_cmp);
	ft_print_list(my_list);
	printf("\n");
	ft_list_clear(my_list, free_nothing);
	return (0);
}
