/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:44:42 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/21 15:46:57 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

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

void	apply_at_level(t_btree *root, int target_level, int current_level,
	void (*applyf)(void *item, int current_level, int is_first_elem))
{
	return ;
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
	int current_level, int is_first_elem))
{
	int	level;
	int	max_level;

	level = 0;
	max_level = btree_level_count(root);
	while (level < max_level)
	{
		apply_at_level(root, level, 0, applyf);
		level++;
	}
}
