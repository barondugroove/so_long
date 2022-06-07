/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:23:50 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/07 15:02:45 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int	main(void)
{
	t_data		data;

	data.p_dir = 8;
	data.mlx = mlx_init();
	ft_fill_walls(&data);
	ft_fill_floors(&data);
	ft_fill_collectibles(&data);
	ft_fill_map(&data);
	data.mlx_win = mlx_new_window(data.mlx, (data.map_x + 10) * 32, (data.map_y + 10) * 32, "so_long");
	mlx_loop_hook(data.mlx, ft_frames, &data);
	ft_print_map(&data);
	mlx_loop(data.mlx);
	return (0);
}
