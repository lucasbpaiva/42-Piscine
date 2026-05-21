/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:49:30 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/21 14:19:53 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
// #include <stdio.h>
// #include <stdlib.h>

int	ft_max(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (1 + ft_max(btree_level_count(root->left),
			btree_level_count(root->right)));
}

// int	main(void)
// {
// 	t_btree	*root;

// 	printf("Test 1 (Empty): %d\n", btree_level_count(NULL));
// 	root = btree_create_node("Root");
// 	printf("Test 2 (Single Node): %d\n", btree_level_count(root));
// 	root->left = btree_create_node("L1");
// 	root->right = btree_create_node("R1");
// 	root->left->left = btree_create_node("L2");
// 	printf("Test 3 (3 Levels): %d\n", btree_level_count(root));
// 	root->left->left->left = btree_create_node("L3");
// 	root->left->left->left->left = btree_create_node("L4");
// 	printf("Test 4 (Skewed 5 Levels): %d\n", btree_level_count(root));
// 	btree_clear(root);
// 	return (0);
// }
