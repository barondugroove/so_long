/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprites.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:57:15 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/30 12:01:00 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_fill_walls(t_data *data)
{
	int	img_width;
	int	img_height;

	data->sprites.coin_hg = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/coinHG.xpm", &img_width, &img_height);
	data->sprites.coin_hd = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/coinHD.xpm", &img_width, &img_height);
	data->sprites.coin_bg = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/coinBG.xpm", &img_width, &img_height);
	data->sprites.coin_bd = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/coinBD.xpm", &img_width, &img_height);
	data->sprites.wallu = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/wallu.xpm", &img_width, &img_height);
	data->sprites.walld = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/walld.xpm", &img_width, &img_height);
	data->sprites.wallr = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/wallr.xpm", &img_width, &img_height);
	data->sprites.wallg = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/wallg.xpm", &img_width, &img_height);
	data->sprites.floor = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/floor.xpm", &img_width, &img_height);
	data->sprites.wall_int = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/wall_int.xpm", &img_width, &img_height);
}

void	ft_fill_collectibles(t_data *data)
{
	int	img_width;
	int	img_height;

	data->sprites.c = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/C1.xpm", &img_width, &img_height);
	data->sprites.e = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/E.xpm", &img_width, &img_height);
}
