/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:44:42 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/22 10:25:53 by lbalderr         ###   ########.fr       */
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

// info[0] is target level, info[1] is current level
void	apply_at_level(t_btree *root, int info[2], int *levels_first,
	void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (!root)
		return ;
	if (info[0] == info[1])
	{
		if (levels_first[info[1]] == 0)
		{
			applyf(root->item, info[1], 1);
			levels_first[info[1]] = 1;
		}
		else
			applyf(root->item, info[1], 0);
		return ;
	}
	info[1]++;
	apply_at_level(root->left, info, levels_first, applyf);
	apply_at_level(root->right, info, levels_first, applyf);
	info[1]--;
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
	int current_level, int is_first_elem))
{
	int	level;
	int	max_level;
	int	*levels_first;
	int	info[2];

	if (!root || !applyf)
		return ;
	max_level = btree_level_count(root);
	levels_first = malloc(sizeof(int) * max_level);
	if (!levels_first)
		return ;
	level = 0;
	while (level < max_level)
	{
		levels_first[level] = 0;
		info[0] = level;
		info[1] = 0;
		apply_at_level(root, info, levels_first, applyf);
		level++;
	}
	free(levels_first);
}
