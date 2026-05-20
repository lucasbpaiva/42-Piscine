/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:38:16 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/20 15:51:18 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
// #include <stdio.h>
// #include <stdlib.h>

void	btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	if (!root || !cmpf)
		return ;
	if (!(*root))
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf(item, (*root)->item) < 0)
		btree_insert_data(&((*root)->left), item, cmpf);
	else
		btree_insert_data(&((*root)->right), item, cmpf);
}

// int	ft_strcmp(char *s1, char *s2);

// int	cmpf(void *s1, void *s2)
// {
// 	return (ft_strcmp((char *)s1, (char *)s2));
// }

// // --- In-Order Traversal Print ---
// // Left -> Root -> Right (Prints a BST in sorted order)
// void	print_tree_inorder(t_btree *root)
// {
// 	if (!root)
// 		return ;
// 	print_tree_inorder(root->left);
// 	printf("%s ", (char *)root->item);
// 	print_tree_inorder(root->right);
// }

// void	btree_clear(t_btree *root)
// {
// 	if (!root)
// 		return ;
// 	btree_clear(root->left);
// 	btree_clear(root->right);
// 	free(root);
// }

// /* 
// 	The tree should structurally look like this:
// 			 M
// 			/ \
// 		   F   S
// 		  /     \
// 		 B       Z
// */
// int	main(void)
// {
// 	t_btree	*root;

// 	root = NULL;
// 	printf("Inserting items: 'M', 'F', 'S', 'B', 'Z'\n\n");
// 	btree_insert_data(&root, "M", cmpf);
// 	btree_insert_data(&root, "F", cmpf);
// 	btree_insert_data(&root, "S", cmpf);
// 	btree_insert_data(&root, "B", cmpf);
// 	btree_insert_data(&root, "Z", cmpf);
// 	printf("Expected output (Should be sorted alphabetically):\n");
// 	printf("B F M S Z\n\n");
// 	printf("Actual output:\n");
// 	print_tree_inorder(root);
// 	printf("\n\n");
// 	btree_clear(root);
// 	root = NULL;
// 	return (0);
// }
