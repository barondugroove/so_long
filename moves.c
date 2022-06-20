/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:52:43 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/20 17:30:06 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_inputs(int keycode, t_data *data)
{
	if (keycode == 65307)
		close_win(data);
	if (keycode == 119)
		ft_player_movements(data, 0, -1);
	if (keycode == 115)
		ft_player_movements(data, 0, 1);
	if (keycode == 97)
		ft_player_movements(data, -1, 0);
	if (keycode == 100)
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
	char *move;

	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == '1')
		return ;
	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == 'E' && data->c_count != 0)
		return ;
	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == 'C')
	{
		grab_chest(data, data->p_pos_y + p_dir_y, data->p_pos_x + p_dir_x);
		data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] = '0';
	}
	if (data->map[data->p_pos_y + p_dir_y][data->p_pos_x + p_dir_x] == 'E' && data->c_count == 0)
		close_win(data);
	ft_print_sprite(data, data->p_pos_x, data->p_pos_y, data->sprites.floor);
	moves++;
	move = ft_itoa(moves);
	mlx_string_put(data->mlx, data->mlx_win, 6 * IMG_SIZE, 6 * IMG_SIZE, 0xffffff, "Moves :");
	mlx_string_put(data->mlx, data->mlx_win, 8 * IMG_SIZE, 6 * IMG_SIZE, 0xffffff, move);
	free(move);
	ft_printf("Moves = %d\n", moves);
	data->p_pos_x += p_dir_x;
	data->p_pos_y += p_dir_y;
}
