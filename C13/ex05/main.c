/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:00:52 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/21 12:22:49 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	test_search(t_btree	*root, char *search_term)
{
	void	*result;

	result = btree_search_item(root, search_term, cmpf);
	printf("Searching for '%s'...\n", search_term);
	if (result)
		printf("Result: Found! -> '%s'\n\n", (char *)result);
	else
		printf("Result: NOT Found (NULL)\n\n");
}

// Let's build an unsorted tree of strings
//         "Root"
//        /      \
//   "Left"      "Right"
//   /    \
// "A"    "B"
int	main(void)
{
	t_btree	*root;

	root = btree_create_node("Root");
	root->left = btree_create_node("Left");
	root->right = btree_create_node("Right");
	root->left->left = btree_create_node("A");
	root->left->right = btree_create_node("B");
	test_search(root, "B");
	test_search(root, "MissingNode");
	btree_clear(root);
	return (0);
}
