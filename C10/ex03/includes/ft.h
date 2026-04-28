/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:22:58 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/28 16:34:21 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

# define HEX "0123456789abcdef"

typedef struct s_stream
{
	int		argc;
	char	**argv;
	int		curr_arg;
	int		fd;
	long	offset;
}	t_stream;

int		ft_strcmp(char *s1, char *s2);
void	ft_hexdump(t_stream *s);
void	print_offset(long offset);
void	ft_putstr_fd(char *str, int fd);
void	ft_display_option_error(char *prog_name);
void	print_hex_content(unsigned char *buf, int n);
void	print_ascii_content(unsigned char *buf, int n);
void	ft_display_error(char *prog_name, char *file_name);

#endif