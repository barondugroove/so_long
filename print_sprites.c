/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sprites.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:29:34 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/07 18:21:07 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_print_sprite(t_data *data, int x, int y, void *sprite)
{	
	mlx_put_image_to_window(data->mlx, data->mlx_win, sprite, (x + 5) * IMG_SIZE, (y + 5) * IMG_SIZE);
}

void	ft_print_walls(t_data *data, int x, int y)
{
	if (y == 0)
	{
		if (x == 0)
			ft_print_sprite(data, x, y, data->sprites.coinHG);
		else if (x == data->map_x - 1)
			ft_print_sprite(data, x, y, data->sprites.coinHD);
		else
			ft_print_sprite(data, x, y, data->sprites.wallu);
	}
	if (y == data->map_y)
	{
		if (x == 0)
			ft_print_sprite(data, 0, y, data->sprites.coinBG);
		else if (x == data->map_x - 1)
			ft_print_sprite(data, x, y, data->sprites.coinBD);
		else
			ft_print_sprite(data, x, y, data->sprites.walld);

	}
	if (y > 0 && y < data->map_y)
	{
		if (x == 0)
			ft_print_sprite(data, x, y, data->sprites.wallg);
		if (x == data->map_x - 1) 
			ft_print_sprite(data, x, y, data->sprites.wallr);
	}
}
		

void    ft_print_map(t_data *data)
{
    int x;
    int y;
	int i = 0;

    x = 0;
    y = 0;
    while (y <= data->map_y)
    {
        while (x < data->map_x - 1)
        {
            if (data->map[y][x] == '1')
				ft_print_walls(data, x, y);
            if (data->map[20][2] == '0')
				ft_printf("lol");
            if (data->map[y][x] == '0')
				ft_print_sprite(data, x, y, data->sprites.floor);
            if (data->map[y][x] == 'C')
				ft_print_sprite(data, x, y, data->sprites.C1);
            if (data->map[y][x] == 'E')
				ft_print_sprite(data, x, y, data->sprites.E);
            /*if (data->map[x][y] == 'P')
			{
				data->p_pos_x = x;
				data->p_pos_y = y;
            }*/
			x++;
        }
        y++;
        x = 0;
    }
	while (i < data->map_y)
	{
		ft_printf("%s", data->map[i]);
		i++;
	}	
}

void    ft_print_player(t_data *data)
{
	static int	i;

	if (i > PLAYER_FRAMES)
		i = 0;
	ft_print_sprite(data, data->p_pos_x, data->p_pos_y, data->sprites.P[i]);
	i++;
}

void    ft_print_blood(t_data *data)
{
	int	x;
	int	y;
	static int	i;

	x = 0;
	y = 0;
	if (i > BLOOD_FRAMES)
		i = 0;
	while (y < data->map_y + 10)
	{
		while (x < data->map_x + 10)
		{
			if (y < 5 && x < data->map_x + 10)
				ft_print_sprite(data, x - 5, y - 5, data->sprites.B[i]);
			if (x < 5 && y < data->map_x + 10)
				ft_print_sprite(data, x - 5, y - 5, data->sprites.B[i]);
			if (x >= data->map_x + 5)
				ft_print_sprite(data, x - 5, y - 5, data->sprites.B[i]);
			if (y >= data->map_y + 5) 
				ft_print_sprite(data, x - 5, y - 5, data->sprites.B[i]);

			x++;
		}
		x = 0;
		y++;
	}
	i++;
}
