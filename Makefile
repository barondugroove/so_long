# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchabot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 14:29:55 by bchabot           #+#    #+#              #
#    Updated: 2022/05/26 11:44:42 by bchabot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c

CC = gcc

#LIBFT = libft/libft.a

#MLXFLAGS = -L ./mlx/ -lmlx -framework OpenGL -framework AppKit -lz

CFLAGS = -Wall -Wextra -Werror -g

NAME = so_long

OBJS = $(SRCS:.c=.o)

CLIB = ar -rcs

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I/usr/include -Imlx_linux -O3 -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

clean :
	rm -f $(OBJS) $(BONUS_OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean
