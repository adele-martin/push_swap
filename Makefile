# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 13:30:55 by ademarti          #+#    #+#              #
#    Updated: 2024/03/05 13:31:40 by ademarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wextra -Wall -Werror
SRC = push.c main.c \
LIBFT = libft
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L./$(LIBFT) -lft -o $(NAME)

clean:
	rm -rf $(LIBFT)/*.o
	rm -rf $(OBJS)
	rm -rf $(BONUS_OBJS)

fclean: clean
	rm -f $(LIBFT)/libft.a
	rm -f $(NAME)
	rm -f $(BONUS_NAME)

re: fclean all

.PHONY: all bonus clean fclean re