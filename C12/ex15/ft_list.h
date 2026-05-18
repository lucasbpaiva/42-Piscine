/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:20:21 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/18 18:12:51 by lbalderr         ###   ########.fr       */
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
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
void	ft_print_list(t_list *node);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_reverse_fun(t_list *begin_list);
void	ft_list_sort(t_list **begin_list, int (*cmp)());
void	simpler_sort(t_list **begin_list, int (*cmp)());
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
			void *data_ref, int (*cmp)());
void	ft_list_remove_if(t_list **begin_list, void *data_ref,
			int (*cmp)(), void (*free_fct)(void *));
t_list	*ft_create_elem(void *data);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_push_strs(int size, char **strs);
t_list	*ft_list_at(t_list *begin_list, int nbr);
t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());

#endif