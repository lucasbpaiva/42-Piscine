/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 10:21:51 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/22 10:30:15 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

// --- The applyf function required by the exercise ---
void	print_node_info(void *item, int current_level, int is_first_elem)
{
	printf("Level %d | First: %d | Item: %s\n",
		current_level,
		is_first_elem,
		(char *)item);
}

int	main(void)
{
	t_btree	*root;

	root = btree_create_node("A");
	root->left = btree_create_node("B");
	root->right = btree_create_node("C");
	root->left->left = btree_create_node("D");
	root->left->right = btree_create_node("E");
	root->right->left = btree_create_node("F");
	root->right->right = btree_create_node("G");
	printf("--- Executing btree_apply_by_level ---\n");
	btree_apply_by_level(root, print_node_info);
	printf("--------------------------------------\n");
	btree_clear(root);
	return (0);
}
