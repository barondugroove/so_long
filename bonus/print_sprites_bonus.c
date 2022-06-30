/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sprites_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:29:34 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/30 12:09:56 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_print_sprite(t_data *data, int x, int y, void *sprite)
{	
	mlx_put_image_to_window(data->mlx, data->mlx_win, sprite, \
	(x + 5) * IMG_SIZE, (y + 5) * IMG_SIZE);
}

void	ft_print_walls(t_data *data, int x, int y)
{
	if (y == 0)
	{
		if (x == 0)
			ft_print_sprite(data, x, y, data->sprites.coin_hg);
		else if (x == data->map_x - 1)
			ft_print_sprite(data, x, y, data->sprites.coin_hd);
		else
			ft_print_sprite(data, x, y, data->sprites.wallu);
	}
	else if (y == data->map_y - 1)
	{
		if (x == 0)
			ft_print_sprite(data, x, y, data->sprites.coin_bg);
		else if (x == data->map_x - 1)
			ft_print_sprite(data, x, y, data->sprites.coin_bd);
		else
			ft_print_sprite(data, x, y, data->sprites.walld);
	}
	else if (x == 0)
		ft_print_sprite(data, x, y, data->sprites.wallg);
	else if (x == data->map_x - 1)
		ft_print_sprite(data, x, y, data->sprites.wallr);
	else
		ft_print_sprite(data, x, y, data->sprites.wall_int);
}

void	ft_set_player_coordinate(t_data *data, int x, int y)
{
	data->p_pos_x = x;
	data->p_pos_y = y;
}

void	ft_print_map(t_data *data)
{
	int	x;
	int	y;

	x = -1;
	y = -1;
	while (++y < data->map_y)
	{
		while (++x <= data->map_x)
		{
			if (data->map[y][x] == '1')
				ft_print_walls(data, x, y);
			else if (data->map[y][x] == '0')
				ft_print_sprite(data, x, y, data->sprites.floor);
			else if (data->map[y][x] == 'C')
				ft_print_sprite(data, x, y, data->sprites.c[0]);
			else if (data->map[y][x] == 'E')
				ft_print_sprite(data, x, y, data->sprites.e);
			else if (data->map[y][x] == 'P')
				ft_set_player_coordinate(data, x, y);
		}
		x = -1;
	}
}
