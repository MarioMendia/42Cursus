#Nombre del ejecutable
LIB = ar rcs
RM = rm -f
NAME = libft.a
#Archivos fuente 
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c\
	  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
	  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
	  ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
	  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
#Archivos bonus
BONUSSRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
		   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
		   ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
#Lista de Objetos y bonus objetos
OBJ = $(SRC:.c=.o)
BONUSOBJ = $(BONUSSRC:.c=.o)
INCLUDE = libft.h
#Comp y flags
CC = gcc
FLAGS = -Wall -Wextra -Werror
#
all: $(SRC) $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUSOBJ) $(INCLUDE)
		$(LIB) $(NAME) $(BONUSOBJ) $(OBJ)
#Regla para compilar archivos src a arcivos obj
%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $?
#Regla para limpiar archivos generados
clean:
	@rm -f $(OBJ) $(BONUSOBJ)
fclean: clean
	@rm -f $(NAME)
re: fclean all
rebonus: fclean bonus
#Esto no son archivos
.PHONY: all bonus clean fclean re rm -rf
