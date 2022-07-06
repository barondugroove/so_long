# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bchabot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 14:29:55 by bchabot           #+#    #+#              #
#    Updated: 2022/07/04 13:14:36 by bchabot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/main.c \
		srcs/parse_map.c \
		srcs/get_sprites.c \
		srcs/print_sprites.c \
		srcs/clear_window.c \
		srcs/moves.c \
		srcs/check_errors.c \
		srcs/check_errors_utils.c \
		srcs/create_assets.c

SRCS_BONUS = bonus/main_bonus.c \
				bonus/parse_map_bonus.c \
				bonus/get_sprites_bonus.c \
				bonus/print_sprites_bonus.c \
				bonus/animations_bonus.c \
				bonus/clear_window_bonus.c \
				bonus/moves_bonus.c \
				bonus/enemies_bonus.c \
				bonus/check_errors_bonus.c \
				bonus/check_errors_utils_bonus.c \
				bonus/create_assets_bonus.c

CC = gcc

LIBFT = libft/libft.a

MLX = mlx_linux/libmlx.a

CFLAGS = -Wall -Wextra -Werror

NAME = so_long

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all : $(NAME)
	
$(LIBFT) :
	make -C libft/

$(MLX) :
	make -C mlx_linux/

$(NAME): $(OBJS) $(LIBFT) $(MLX)
	$(CC) $(OBJS) $(CFLAGS) $(LIBFT) $(MLX) -lXext -lX11 -o $(NAME)

bonus : $(OBJS_BONUS) $(LIBFT) $(MLX)
	$(CC) $(OBJS_BONUS) $(CFLAGS) $(LIBFT) $(MLX) -lXext -lX11 -o $(NAME)

clean :
	rm -f $(OBJS)
	rm -f $(OBJS_BONUS)
	make -C libft/ fclean
	make -C mlx_linux/ clean

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean
