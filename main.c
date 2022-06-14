/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:23:50 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/14 15:59:07 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

static int	close_hook(t_data *data)
{
	close_win(data);
	return (0);
}

int	main(void)
{
	t_data		data;

	data.p_pos_x = 0;
	data.p_pos_y = 0;
	data.p_dir = 8;
	data.mlx = mlx_init();
	ft_fill_walls(&data);
	ft_fill_floors(&data);
	ft_fill_collectibles(&data);
	ft_fill_characters(&data);
	ft_fill_map(&data);
	data.mlx_win = mlx_new_window(data.mlx, (data.map_x + 10) * 32, (data.map_y + 10) * 32, "so_long");
	ft_print_map(&data);
	mlx_loop_hook(data.mlx, ft_frames, &data);
	mlx_key_hook(data.mlx_win, ft_inputs, &data);
	mlx_hook(data.mlx_win, 17, 0, close_hook, &data);
	mlx_loop(data.mlx);
	return (0);
}
