SRC = ft_printf.c ft_printutils.c ft_print_pointer.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./
NAME = libftprintf.a

OBJ = $(SRC:.c=.o)
DEP = $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -MMD -c $< -o $@

clean:
	rm -f $(OBJ) $(DEP)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEP)
