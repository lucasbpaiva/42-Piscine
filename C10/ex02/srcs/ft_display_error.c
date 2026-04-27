/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:21:14 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/27 15:54:09 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libgen.h>
#include <string.h>
#include <errno.h>
#include "ft.h"

void	ft_display_error(char *prog_name, char *file_name)
{
	ft_putstr_fd(basename(prog_name), 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(file_name, 2);
	ft_putstr_fd(": ", 2);
	ft_putstr_fd(strerror(errno), 2);
	ft_putstr_fd("\n", 2);
}

void	display_offset_error(char *argv[])
{
	ft_putstr_fd(basename(argv[0]), 2);
	ft_putstr_fd(": illegal offset -- ", 2);
	ft_putstr_fd(argv[2], 2);
	ft_putstr_fd(": Invalid argument\n", 2);
}

void	display_argreq_error(char *prog_name)
{
	ft_putstr_fd(basename(prog_name), 2);
	ft_putstr_fd(": requires an argument\n", 2);
	ft_putstr_fd("usage: ", 2);
	ft_putstr_fd(basename(prog_name), 2);
	ft_putstr_fd(" -c # [file ...]\n", 2);
}
