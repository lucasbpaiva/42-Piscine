/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:20:21 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/18 10:40:57 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H

# define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

int		ft_list_size(t_list *begin_list);
void	ft_putstr(char *str);
void	ft_print_list(t_list *node);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list	*ft_create_elem(void *data);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_push_strs(int size, char **strs);

#endif