/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:47:10 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/22 16:20:46 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		ft_putstr_fd(2, "File name missing.\n");
	else if (argc > 2)
		ft_putstr_fd(2, "Too many arguments.\n");
	else
		ft_display_file(argv[1]);
	return (0);
}
