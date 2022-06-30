/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_window_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:51:25 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/30 12:10:28 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_free_enemies(t_data *data)
{
	int	i;

	i = 0;
	while (i <= ENEMY_FRAMES)
		mlx_destroy_image(data->mlx, data->sprites.d[i++]);
}

void	ft_free_character(t_data *data)
{
	int	i;

	i = 0;
	while (i <= PLAYER_FRAMES)
		mlx_destroy_image(data->mlx, data->sprites.p[i++]);
}

void	ft_free_blood(t_data *data)
{
	int	i;

	i = 0;
	while (i <= BLOOD_FRAMES)
		mlx_destroy_image(data->mlx, data->sprites.b[i++]);
}

void	ft_free_collectibles(t_data *data)
{
	int	i;

	i = 0;
	while (i <= CHEST_FRAMES)
		mlx_destroy_image(data->mlx, data->sprites.c[i++]);
}

void	close_win(t_data *data)
{
	int	i;

	i = 0;
	ft_free_character(data);
	ft_free_blood(data);
	ft_free_collectibles(data);
	ft_free_enemies(data);
	mlx_destroy_image(data->mlx, data->sprites.coin_hd);
	mlx_destroy_image(data->mlx, data->sprites.coin_hg);
	mlx_destroy_image(data->mlx, data->sprites.coin_bd);
	mlx_destroy_image(data->mlx, data->sprites.coin_bg);
	mlx_destroy_image(data->mlx, data->sprites.wallu);
	mlx_destroy_image(data->mlx, data->sprites.walld);
	mlx_destroy_image(data->mlx, data->sprites.wallr);
	mlx_destroy_image(data->mlx, data->sprites.wallg);
	mlx_destroy_image(data->mlx, data->sprites.wall_int);
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
