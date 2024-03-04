# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademarti <ademarti@student.42berlin.de     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 13:30:55 by ademarti          #+#    #+#              #
#    Updated: 2024/03/04 17:01:07 by ademarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wextra -Wall -Werror
SRC = push.c linked_list.c
LIBFT = libft/libft.a
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

libft:
	$(MAKE) -C libft/libft.a

clean:
	rm -rf $(LIBFT)/*.o
	rm -rf $(OBJS)

fclean: clean
	rm -f $(LIBFT)/libft.a
	rm -f $(NAME)

re: fclean all