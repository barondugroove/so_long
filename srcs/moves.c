/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:52:43 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/30 16:24:56 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_inputs(int keycode, t_data *data)
{
	if (keycode == 65307)
		close_win(data);
	if (keycode == 119 || keycode == 65362)
		ft_player_collision(data, 0, -1);
	if (keycode == 115 || keycode == 65364)
		ft_player_collision(data, 0, 1);
	if (keycode == 97 || keycode == 65361)
		ft_player_collision(data, -1, 0);
	if (keycode == 100 || keycode == 65363)
		ft_player_collision(data, 1, 0);
	return (0);
}

void	ft_move_player(t_data *data, int p_dir_x, int p_dir_y)
{
	ft_print_sprite(data, data->p_pos_x, data->p_pos_y, data->sprites.floor);
	ft_print_sprite(data, data->p_pos_x + p_dir_x, data->p_pos_y + p_dir_y, \
	data->sprites.p);
	data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] = 'P';
	data->map[data->p_pos_y][data->p_pos_x] = '0';
	data->p_pos_x += p_dir_x;
	data->p_pos_y += p_dir_y;
}

void	ft_player_collision(t_data *data, int p_dir_x, int p_dir_y)
{
	static int	moves;

	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == '1')
		return ;
	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == 'E' \
	&& data->c_count != 0)
		return ;
	moves++;
	ft_printf("Moves = %d\n", moves);
	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == 'C')
	{
		data->c_count--;
		data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] = '0';
	}
	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == 'E' \
	&& data->c_count == 0)
	{
		ft_printf("You Win, congratulations.\n");
		close_win(data);
	}
	ft_move_player(data, p_dir_x, p_dir_y);
}
