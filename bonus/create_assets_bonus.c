/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_assets_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:58:40 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/29 12:34:57 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_fill_characters(t_data *data)
{
	int	img_width;
	int	img_height;

	data->sprites.p[0] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P1.xpm", &img_width, &img_height);
	data->sprites.p[1] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P2.xpm", &img_width, &img_height);
	data->sprites.p[2] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P3.xpm", &img_width, &img_height);
	data->sprites.p[3] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P4.xpm", &img_width, &img_height);
	data->sprites.p[4] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P5.xpm", &img_width, &img_height);
	data->sprites.p[5] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P6.xpm", &img_width, &img_height);
	data->sprites.p[6] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P7.xpm", &img_width, &img_height);
	data->sprites.p[7] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P8.xpm", &img_width, &img_height);
	ft_fill_characters_2(data);
}

void	ft_fill_characters_2(t_data *data)
{
	int	img_width;
	int	img_height;

	data->sprites.p[8] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P9.xpm", &img_width, &img_height);
	data->sprites.p[9] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P10.xpm", &img_width, &img_height);
	data->sprites.p[10] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P11.xpm", &img_width, &img_height);
	data->sprites.p[11] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P12.xpm", &img_width, &img_height);
	data->sprites.p[12] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P13.xpm", &img_width, &img_height);
	data->sprites.p[13] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P14.xpm", &img_width, &img_height);
	data->sprites.p[14] = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P15.xpm", &img_width, &img_height);
}

void	ft_create_assets(t_data *data)
{
	ft_fill_walls(data);
	ft_fill_water(data);
	ft_fill_collectibles(data);
	ft_fill_characters(data);
	ft_fill_enemies(data);
}
