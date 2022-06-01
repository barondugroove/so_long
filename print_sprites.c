/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sprites.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:29:34 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/01 21:37:46 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_print_sprite(t_data *data, int x, int y, void *sprite)
{	
	mlx_put_image_to_window(data->mlx, data->mlx_win, sprite, x * IMG_SIZE, y * IMG_SIZE);
}

void	ft_print_walls(t_data *data, int x, int y)
{
	if (y == 0)
	{
		if (x == 0)
			ft_print_sprite(data, x, y, data->sprites.coinHG);
		if (y == data->map_y)
			ft_print_sprite(data, x, y, data->sprites.coinHD);
		else
			ft_print_sprite(data, x, y, data->sprites.wallu);
	}
	if (y == data->map_y)
	{
		if (x == 0)
			ft_print_sprite(data, x, y, data->sprites.coinBG);
		if (y == data->map_y)
			ft_print_sprite(data, x, y, data->sprites.coinBD);
		else
			ft_print_sprite(data, x, y, data->sprites.wallb);

	}
	if (y > 0 && y < data->map_y)
	{
		if (x == 0)
			ft_print_sprite(data, x, y, data->sprites.wallg);
		if (x == data->map_y)
			ft_print_sprite(data, x, y, data->sprites.walld);
	}
}
		

void    ft_print_map(t_data *data)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < data->map_y)
    {
        while (j < data->map_x)
        {
            if (data->map[j][i] == '1')
				ft_print_walls(data, j, i);
            if (data->map[j][i] == '0')
				ft_print_sprite(data, j, i, data->img_floor);
            j++;
        }
        i++;
        j = 0;
    }
}
