/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:22:58 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/28 11:46:55 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

# define HEX "0123456789abcdef"

void	print_offset(long offset);
void	ft_putstr_fd(char *str, int fd);
void	print_hex_content(unsigned char *buf, int n);
void	print_ascii_content(unsigned char *buf, int n);

#endif