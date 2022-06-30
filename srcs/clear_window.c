/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:51:25 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/30 12:05:02 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	close_win(t_data *data)
{
	int	i;

	i = 0;
	mlx_destroy_image(data->mlx, data->sprites.p);
	mlx_destroy_image(data->mlx, data->sprites.c);
	mlx_destroy_image(data->mlx, data->sprites.coin_hd);
	mlx_destroy_image(data->mlx, data->sprites.coin_hg);
	mlx_destroy_image(data->mlx, data->sprites.coin_bd);
	mlx_destroy_image(data->mlx, data->sprites.coin_bg);
	mlx_destroy_image(data->mlx, data->sprites.wallu);
	mlx_destroy_image(data->mlx, data->sprites.walld);
	mlx_destroy_image(data->mlx, data->sprites.wallr);
	mlx_destroy_image(data->mlx, data->sprites.wall_int);
	mlx_destroy_image(data->mlx, data->sprites.wallg);
	mlx_destroy_image(data->mlx, data->sprites.floor);
	mlx_destroy_image(data->mlx, data->sprites.e);
	mlx_destroy_window(data->mlx, data->mlx_win);
	mlx_destroy_display(data->mlx);
	while (i < data->map_y)
		free(data->map[i++]);
	free(data->map);
	free(data->mlx);
	exit(0);
}
