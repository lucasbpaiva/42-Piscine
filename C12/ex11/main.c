/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:22:45 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/18 17:28:57 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	free_nothing(void *data)
{
	(void)data;
	return ;
}

int	main(int argc, char *argv[])
{
	t_list	*list;
	t_list	*found;
	char	*secret_word;

	secret_word = "42";
	if (argc < 2)
		return (0);
	list = ft_list_push_strs(argc - 1, &argv[1]);
	found = ft_list_find(list, secret_word, ft_strcmp);
	if (found)
	{
		printf("Found secret word in list, ");
		printf("secret_word: %s\n", (char *)found->data);
	}
	else
		printf("List does not contain the secret word\n");
	ft_list_clear(list, free_nothing);
	return (0);
}
