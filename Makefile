# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchabot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 14:29:55 by bchabot           #+#    #+#              #
#    Updated: 2022/06/15 20:11:49 by bchabot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c \
		parse_map.c \
		get_sprites.c \
		print_sprites.c \
		animations.c \
		clear_window.c \
		moves.c \
		check_errors.c \
		check_errors_utils.c

CC = gcc

LIBFT = libft/libft.a

CFLAGS = -Wall -Wextra -Werror -g3

NAME = so_long

OBJS = $(SRCS:.c=.o)

CLIB = ar -rcs

all : $(NAME)
	
$(LIBFT) :
	make -C libft/

%.o: %.c
	$(CC) $(CFLAGS) -I/usr/include -Imlx_linux -O3 -c $< -o $@

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(OBJS) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz $(LIBFT) -o $(NAME)

clean :
	rm -f $(OBJS) $(BONUS_OBJS)
	make -C libft/ clean

fclean : clean
	rm -rf $(NAME)
	make -C libft/ fclean

re : fclean all

.PHONY : all re clean fclean
