# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbalderr <lbalderr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/22 23:11:46 by lbalderr          #+#    #+#              #
#    Updated: 2026/04/23 12:46:11 by lbalderr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_display_content.c srcs/ft_display_error.c srcs/ft_putstr_fd.c srcs/main.c
OBJS	= $(SRCS:.c=.o)
INCS	= includes
NAME	= ft_cat
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