/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sprites.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:29:34 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/03 20:46:21 by bchabot          ###   ########.fr       */
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
	if (y == data->map_y - 1)
	{
		if (x == 0)
			ft_print_sprite(data, x, y, data->sprites.coinBG);
		else if (x == data->map_x - 1)
			ft_print_sprite(data, x, y, data->sprites.coinBD);
		else
			ft_print_sprite(data, x, y, data->sprites.walld);

	}
	if (y > 0 && y < data->map_y - 1)
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

    x = 0;
    y = 0;
    while (y < data->map_y)
    {
        while (x < data->map_x)
        {
            if (data->map[x][y] == '1')
				ft_print_walls(data, x, y);
            if (data->map[x][y] == '0')
				ft_print_sprite(data, x, y, data->sprites.floor);
            if (data->map[x][y] == 'C')
				ft_print_sprite(data, x, y, data->sprites.C1);
            if (data->map[x][y] == 'P')
				ft_print_sprite(data, x, y, data->sprites.P);
            x++;
        }
        y++;
        x = 0;
    }
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
			if (x > data->map_x + 5)
				ft_print_sprite(data, x - 5, y - 5, data->sprites.B[i]);
			if (y > data->map_y + 5) 
				ft_print_sprite(data, x - 5, y - 5, data->sprites.B[i]);

			x++;
		}
		x = 0;
		y++;
	}
	i++;
}
