/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:21:14 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/24 16:22:48 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libgen.h>
#include <string.h>
#include <errno.h>
#include "ft.h"

void	ft_display_error(char *prog_name, char *file_name)
{
	ft_putstr_fd(2, basename(prog_name));
	ft_putstr_fd(2, ": ");
	ft_putstr_fd(2, file_name);
	ft_putstr_fd(2, ": ");
	ft_putstr_fd(2, strerror(errno));
	ft_putstr_fd(2, "\n");
}
