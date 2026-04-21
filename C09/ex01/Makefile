SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= $(SRCS:.c=.o)
INCS	= includes
NAME	= libft.a
LIBC	= ar rc
LIBR	= ranlib
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCS) -c $< -o $@

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all