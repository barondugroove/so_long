/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:52:43 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/14 16:55:24 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_inputs(int keycode, t_data *data)
{
	if (keycode == 65307)
		close_win(data);
	if (keycode == 119)
		ft_player_movements(data, 0, 1);
	if (keycode == 115)
		ft_player_movements(data, 0, -1);
	if (keycode == 97)
		ft_player_movements(data, 1, 0);
	if (keycode == 100)
		ft_player_movements(data, -1, 0);
	return (0);
}

void ft_player_movements(t_data *data, int p_dir_x, int p_dir_y)
{
	if (data->map[data->p_pos_x + p_dir_x][data->p_pos_y + p_dir_y] != '0')
		return ;
	ft_print_sprite(data, data->p_pos_x, data->p_pos_y, data->sprites.floor);
	data->p_pos_y += p_dir_y;
	data->p_pos_x += p_dir_x;
}
