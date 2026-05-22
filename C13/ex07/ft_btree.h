/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:31:48 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/22 10:32:04 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}	t_btree;

int		cmpf(void *s1, void *s2);
int		ft_strcmp(char *s1, char *s2);
void	btree_clear(t_btree *root);
void	*btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *));
void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
				int current_level, int is_first_elem));
t_btree	*btree_create_node(void *item);

#endif