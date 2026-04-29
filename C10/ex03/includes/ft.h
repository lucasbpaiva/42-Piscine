/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:22:58 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/29 14:26:16 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

# define HEX "0123456789abcdef"

# define SIZE 16

typedef unsigned char	t_uc;

typedef struct s_stream
{
	int		argc;
	char	**argv;
	int		curr_arg;
	int		fd;
	long	offset;
	int		squeeze;
	int		mode;
}	t_stream;

int		ft_strcmp(char *s1, char *s2);
int		is_same_buf(unsigned char *buf1, unsigned char *buf2);
void	ft_hexdump(t_stream *s);
void	ft_putstr_fd(char *str, int fd);
void	print_offset(long offset, int mode);
void	ft_display_option_error(char *prog_name);
void	print_hex_pairs(unsigned char *buf, int n);
void	print_hex_content(unsigned char *buf, int n);
void	print_ascii_content(unsigned char *buf, int n);
void	ft_display_error(char *prog_name, char *file_name);
void	copy_buf(unsigned char *dest, unsigned char *src, int n);

#endif