/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:20:21 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/06 21:35:04 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H

# define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

int		ft_strcmp(char *s1, char *s2);
int		ft_list_size(t_list *begin_list);
void	ft_print_list(t_list *node);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_sort(t_list **begin_list, int (*cmp)());
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
t_list	*ft_create_elem(void *data);
t_list	*ft_list_push_strs(int size, char **strs);

#endif