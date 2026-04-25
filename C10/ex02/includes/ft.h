/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:39:31 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/24 17:00:59 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct s_info
{
	char	*prog;
	char	*file;
}	t_info;

int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
int		load_buf(int fd, int nb, char *buf, t_info *info);
void	ft_putstr_fd(char *str, int fd);
void	display_last_n_bytes(int fd, int nb, t_info *info);
void	ft_display_error(char *prog_name, char *file_name);

#endif