/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_window.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:51:25 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/22 15:46:12 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free_character(t_data *data)
{
	int	i;

	i = 0;
	while (i <= PLAYER_FRAMES)
		mlx_destroy_image(data->mlx, data->sprites.P[i++]);
}

void	ft_free_blood(t_data *data)
{
	int	i;

	i = 0;
	while (i <= BLOOD_FRAMES)
		mlx_destroy_image(data->mlx, data->sprites.B[i++]);
}

void	ft_free_collectibles(t_data *data)
{
	int	i;

	i = 0;
	while (i <= CHEST_FRAMES)
		mlx_destroy_image(data->mlx, data->sprites.C[i++]);
}

int	close_win(t_data *data)
{
	int	i;

	i = 0;
	ft_free_character(data);
	ft_free_blood(data);
	ft_free_collectibles(data);
	mlx_destroy_image(data->mlx, data->sprites.coinHD);
	mlx_destroy_image(data->mlx, data->sprites.coinHG);
	mlx_destroy_image(data->mlx, data->sprites.coinBD);
	mlx_destroy_image(data->mlx, data->sprites.coinBG);
	mlx_destroy_image(data->mlx, data->sprites.wallu);
	mlx_destroy_image(data->mlx, data->sprites.walld);
	mlx_destroy_image(data->mlx, data->sprites.wallr);
	mlx_destroy_image(data->mlx, data->sprites.wallg);
	mlx_destroy_image(data->mlx, data->sprites.floor);
	mlx_destroy_image(data->mlx, data->sprites.E);
	mlx_destroy_window(data->mlx, data->mlx_win);
	mlx_destroy_display(data->mlx);
	while (i < data->map_y)
		free(data->map[i++]);
	free(data->map);
	free(data->mlx);
	exit(0);
	return (0);
}
