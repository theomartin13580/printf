SRC = ft_printf.c ft_printutils.c 

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./
NAME = printf.a
DEP = $(OBSJ:.o=.d)
OBJ	 = $(SRC:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -MMD -c $< -o $@

clean:
	rm -f $(OBJ) $(DEP)	
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
-include $(DEP) 


