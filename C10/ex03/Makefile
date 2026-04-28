# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/27 16:55:02 by lbalderr          #+#    #+#              #
#    Updated: 2026/04/28 17:56:48 by lbalderr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/main.c srcs/ft_hexdump.c srcs/ft_display_error.c srcs/ft_print_utils.c srcs/ft_putstr_fd.c srcs/ft_strcmp.c srcs/ft_buf_utils.c
OBJS	= $(SRCS:.c=.o)
INCS	= includes
NAME	= ft_hexdump
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I $(INCS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re