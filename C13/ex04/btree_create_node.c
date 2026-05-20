/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:36:27 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/20 11:58:23 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*new_node;

	new_node = malloc(sizeof(t_btree));
	if (!new_node)
		return (NULL);
	new_node->item = item;
	new_node->left = 0;
	new_node->right = 0;
	return (new_node);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_btree	*node;
// 	char	*test_data;

// 	test_data = "Hello, 42!";
// 	node = btree_create_node(test_data);
// 	if (!node)
// 	{
// 		printf("Error: btree_create_node returned NULL\n");
// 		return (1);
// 	}
// 	printf("--- Binary Tree Node Test ---\n");
// 	printf("Node Address:  %p\n", (void *)node);
// 	printf("Item Content:  %s\n", (char *)node->item);
// 	printf("Left Pointer:  %p (Expected: 0x0 or nil)\n", (void *)node->left);
// 	printf("Right Pointer: %p (Expected: 0x0 or nil)\n", (void *)node->right);
// 	free(node);
// 	return (0);
// }
