/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:24:50 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/20 14:29:32 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}

// #include <stdio.h>
// #include <stdlib.h>

// t_btree	*btree_create_node(void *item)
// {
// 	t_btree	*new_node;

// 	new_node = malloc(sizeof(t_btree));
// 	if (!new_node)
// 		return (NULL);
// 	new_node->item = item;
// 	new_node->left = 0;
// 	new_node->right = 0;
// 	return (new_node);
// }

// void	print_item(void *item)
// {
// 	if (!item)
// 		return ;
// 	printf("%s ", (char *)item);
// }

// /* 
// 	Manually building this tree:
// 		 A
// 		/ \
// 	   B   C
// */
// int	main(void)
// {
// 	t_btree	*root;
// 	t_btree	*node_b;
// 	t_btree	*node_c;

// 	root = btree_create_node("A");
// 	node_b = btree_create_node("B");
// 	node_c = btree_create_node("C");
// 	root->left = node_b;
// 	root->right = node_c;
// 	printf("Expected output: B C A\n");
// 	printf("Actual output: ");
// 	btree_apply_suffix(root, print_item);
// 	printf("\n");
// 	free(node_b);
// 	free(node_c);
// 	free(root);
// 	return (0);
// }
