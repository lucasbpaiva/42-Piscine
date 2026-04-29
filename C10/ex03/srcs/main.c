/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:58:06 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/29 15:05:34 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	initialize_stream(t_stream *s, int argc, char *argv[])
{
	s->argc = argc;
	s->argv = argv;
	s->fd = -1;
	s->offset = 0;
	s->squeeze = 0;
	if (argc > 1 && ft_strcmp(argv[1], "-C") == 0)
	{
		s->curr_arg = 2;
		s->mode = 1;
	}
	else
	{
		s->curr_arg = 1;
		s->mode = 0;
	}
	if (s->curr_arg == argc)
	{
		s->argc++;
		s->fd = 0;
	}
}

int	main(int argc, char *argv[])
{
	t_stream	s;

	initialize_stream(&s, argc, argv);
	ft_hexdump(&s);
	return (0);
}
