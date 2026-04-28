/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:29:23 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/28 15:29:28 by lbalderr         ###   ########.fr       */
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
