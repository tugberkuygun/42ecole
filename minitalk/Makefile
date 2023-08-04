# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tuygun <tuygun@42kocaeli.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/05 13:57:02 by tuygun            #+#    #+#              #
#    Updated: 2023/06/05 13:57:07 by tuygun           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIBFT = libft
FLAG = -Wall -Wextra -Werror
all: $(NAME)
		@gcc $(FLAG) server.c $(NAME) -o server
		@gcc $(FLAG) client.c $(NAME) -o client
$(NAME): $(LIBFT)
		@make -C $(LIBFT)
		@cp libft/libft.a .
		@echo "READY FOR USING.✅"
clean:
		@make clean -C $(LIBFT)
fclean: clean
		@make fclean -C $(LIBFT)
		@rm -rf $(NAME)
		@rm -rf server client
		@echo "ALL CLEANED.🗑️"
re: fclean all

.PHONY: clean fclean all
