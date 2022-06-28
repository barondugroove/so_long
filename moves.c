/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:52:43 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/28 16:34:21 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_inputs(int keycode, t_data *data)
{
	if (keycode == 65307)
		close_win(data);
	if (keycode == 119 || keycode == 65362)
		ft_player_movements(data, 0, -1);
	if (keycode == 115 || keycode == 65364)
		ft_player_movements(data, 0, 1);
	if (keycode == 97 || keycode == 65361)
		ft_player_movements(data, -1, 0);
	if (keycode == 100 || keycode == 65363)
		ft_player_movements(data, 1, 0);
	return (0);
}

void	grab_chest(t_data *data, int y, int x)
{
	int	i;

	i = 0;
	while (i++ < CHEST_FRAMES * 7500 || usleep(50000))
		ft_print_sprite(data, x, y, data->sprites.C[i / 7500]);
	data->c_count--;
}

void	ft_player_movements(t_data *data, int p_dir_x, int p_dir_y)
{
	static int	moves;
	char		*move;

	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == '1')
		return ;
	moves++;
	ft_printf("Moves = %d\n", moves);
	move = ft_itoa(moves);
	mlx_string_put(data->mlx, data->mlx_win, 180, 180, 0xffffff, "Moves :");
	ft_print_sprite(data, 2, 0, data->sprites.wallu);
	mlx_string_put(data->mlx, data->mlx_win, 225, 180, 0xffffff, move);
	free(move);
	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == 'D')
	{	
		ft_printf("You Lose.");
		close_win(data);
	}
	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == 'E' \
	&& data->c_count != 0)
		return ;
	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == 'C')
	{
		grab_chest(data, data->p_pos_y + p_dir_y, data->p_pos_x + p_dir_x);
		data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] = '0';
	}
	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == 'E' \
	&& data->c_count == 0)
		close_win(data);
	ft_print_sprite(data, data->p_pos_x, data->p_pos_y, data->sprites.floor);
	ft_print_sprite(data, data->p_pos_x + p_dir_x, data->p_pos_y + p_dir_y, \
	data->sprites.P[0]);
	data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] = 'P';
	data->map[data->p_pos_y][data->p_pos_x] = '0';
	data->p_pos_x += p_dir_x;
	data->p_pos_y += p_dir_y;
}
