/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:24:52 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/29 12:34:09 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_print_player(t_data *data)
{
	static int	i;

	if (i > PLAYER_FRAMES)
		i = 0;
	ft_print_sprite(data, data->p_pos_x, data->p_pos_y, data->sprites.p[i++]);
}

void	ft_print_blood(t_data *data)
{
	int			x;
	int			y;
	static int	i;

	x = -1;
	y = -1;
	if (i > BLOOD_FRAMES)
		i = 0;
	while (++y < data->map_y + 10)
	{
		while (++x < data->map_x + 10)
		{
			if (y < 5)
				ft_print_sprite(data, x - 5, y - 5, data->sprites.b[i]);
			if (x < 5 && y < data->map_x + 10)
				ft_print_sprite(data, x - 5, y - 5, data->sprites.b[i]);
			if (x > data->map_x + 4)
				ft_print_sprite(data, x - 5, y - 5, data->sprites.b[i]);
			if (y > data->map_y + 4)
				ft_print_sprite(data, x - 5, y - 5, data->sprites.b[i]);
		}
		x = -1;
	}
	i++;
}

int	ft_frames(t_data *data)
{
	static int	i;

	ft_print_player(data);
	ft_print_blood(data);
	if (i++ == 2)
	{
		enemy_position(data);
		i = 0;
	}
	usleep(1000000 / 24);
	return (0);
}
