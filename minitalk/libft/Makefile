# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tugberkuygun <tuygun@student.42kocaeli.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:10:14 by tugberkuygun      #+#    #+#              #
#    Updated: 2022/11/07 15:10:30 by tugberkuygun     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := gcc
FLAGS := -Wall -Wextra -Werror
OPTION := -c
SRC := $(shell find . -name "ft_*.c")

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(OPTION) $(SRC)
	ar rcs $(NAME) *.o 
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
