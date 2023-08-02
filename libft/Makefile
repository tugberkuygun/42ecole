NAME := libft.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRC := $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS := $(shell find . -name "ft_lst*.c")
OBJ := $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rcs $(NAME) *.o 
bonus:
	gcc $(FLAG) -c $(BONUS)
	ar rcs $(NAME) *.o 
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

.PHONY: all bonus clean fclean re
