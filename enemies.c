/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemies.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:25:08 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/28 16:33:10 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_enemy(t_data *data, int *pos, int *dir)
{
	if (data->map[pos[1] + dir[1]][pos[0] + dir[0]] == 'P')
	{
		ft_printf("You Lose.\n");
		close_win(data);
	}
	if (data->map[pos[1] + dir[1]][pos[0] + dir[0]] == '0')
	{
		data->map[pos[1] + dir[1]][pos[0] + dir[0]] = 'D';
		data->map[pos[1]][pos[0]] = '0';
		ft_print_sprite(data, pos[0], pos[1], data->sprites.floor);
		ft_print_sprite(data, pos[0] + dir[0], pos[1] + dir[1], \
		data->sprites.D[0]);
	}
}

void	ft_print_enemy(t_data *data, int x, int y)
{
	static int	i;

	if (i > ENEMY_FRAMES)
		i = 0;
	ft_print_sprite(data, y, x, data->sprites.D[i++]);
}

void	enemy_position(t_data *data)
{
	int					pos[2];
	int					dir[2];
	static int			i;

	pos[0] = 0;
	pos[1] = 0;
	while (pos[1] < data->map_y)
	{
		while (pos[0] < data->map_x)
		{
			if (data->map[pos[1]][pos[0]] == 'D')
			{
				ft_print_enemy(data, pos[1], pos[0]);
				dir[0] = (rand() % 3) - 1;
				dir[1] = (rand() % 3) - 1;
				if (i++ == 3)
				{	
					move_enemy(data, pos, dir);
					i = 0;
				}
			}
			pos[0]++;
		}
		pos[1]++;
		pos[0] = 0;
	}
}