/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:11:08 by lbalderr          #+#    #+#             */
/*   Updated: 2026/05/04 12:07:12 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char *argv[])
{
	int	val_1;
	int	val_2;

	if (argc != 4)
		return (0);
	val_1 = ft_atoi(argv[1]);
	val_2 = ft_atoi(argv[3]);
	do_op(val_1, val_2, argv[1]);
	return (0);
}
