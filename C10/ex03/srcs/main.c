/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:58:06 by lbalderr          #+#    #+#             */
/*   Updated: 2026/04/28 16:35:01 by lbalderr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	initialize_stream(t_stream *s, int argc, char *argv[])
{
	s->argc = argc;
	s->argv = argv;
	s->curr_arg = 2;
	s->fd = -1;
	s->offset = 0;
}

int	main(int argc, char *argv[])
{
	t_stream	s;

	initialize_stream(&s, argc, argv);
	if (argc >= 2 && ft_strcmp(argv[1], "-C") == 0)
	{
		if (argc == 2)
		{
			s.argc = 3;
			s.fd = 0;
			ft_hexdump(&s);
		}
		else
			ft_hexdump(&s);
	}
	else
		ft_display_option_error(argv[0]);
	return (0);
}
