
LIB = ar rcs
RM = rm -f
NAME = libftprintf.a
SRC = ft_printf.c ft_putchar.c ft_putdigit.c ft_print_ptr.c ft_putstr.c
OBJ = $(SRC:.c=.o)
INCLUDE = ft_printf.h
CC = clang
FLAGS = -Wall -Wextra -Werror
all: $(SRC) $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $?
clean:
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
