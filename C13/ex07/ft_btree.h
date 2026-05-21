/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:31:48 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/21 12:21:33 by lbalderr         ###   ########.fr       */
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
t_btree	*btree_create_node(void *item);

#endif