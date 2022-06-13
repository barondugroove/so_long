/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprites.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:57:15 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/13 12:23:17 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_fill_walls(t_data *data)
{
	int	img_width;
	int	img_height;

	data->sprites.coinHG = mlx_xpm_file_to_image(data->mlx, "./IMAGES/coinHG.xpm", &img_width, &img_height);
	data->sprites.coinHD = mlx_xpm_file_to_image(data->mlx, "./IMAGES/coinHD.xpm", &img_width, &img_height);
	data->sprites.coinBG = mlx_xpm_file_to_image(data->mlx, "./IMAGES/coinBG.xpm", &img_width, &img_height);
	data->sprites.coinBD = mlx_xpm_file_to_image(data->mlx, "./IMAGES/coinBD.xpm", &img_width, &img_height);
	data->sprites.wallu = mlx_xpm_file_to_image(data->mlx, "./IMAGES/wallu.xpm", &img_width, &img_height);
	data->sprites.walld = mlx_xpm_file_to_image(data->mlx, "./IMAGES/walld.xpm", &img_width, &img_height);
	data->sprites.wallr = mlx_xpm_file_to_image(data->mlx, "./IMAGES/wallr.xpm", &img_width, &img_height);
	data->sprites.wallg = mlx_xpm_file_to_image(data->mlx, "./IMAGES/wallg.xpm", &img_width, &img_height);
}

void	ft_fill_floors(t_data *data)
{
	int	img_width;
	int	img_height;

	data->sprites.floor = mlx_xpm_file_to_image(data->mlx, "./IMAGES/floor.xpm", &img_width, &img_height);
	data->sprites.B[0] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B1.xpm", &img_width, &img_height);
	data->sprites.B[1] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B2.xpm", &img_width, &img_height);
	data->sprites.B[2] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B3.xpm", &img_width, &img_height);
	data->sprites.B[3] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B4.xpm", &img_width, &img_height);
	data->sprites.B[4] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B5.xpm", &img_width, &img_height);
	data->sprites.B[5] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B6.xpm", &img_width, &img_height);
	data->sprites.B[6] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B7.xpm", &img_width, &img_height);
	data->sprites.B[7] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B8.xpm", &img_width, &img_height);
	data->sprites.B[8] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B9.xpm", &img_width, &img_height);
	data->sprites.B[9] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B10.xpm", &img_width, &img_height);
	data->sprites.B[10] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B11.xpm", &img_width, &img_height);
	data->sprites.B[11] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B12.xpm", &img_width, &img_height);
	data->sprites.B[12] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B13.xpm", &img_width, &img_height);
	data->sprites.B[13] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/B14.xpm", &img_width, &img_height);
}

void ft_fill_collectibles(t_data *data)
{
	int	img_width;
	int	img_height;

	data->sprites.C1 = mlx_xpm_file_to_image(data->mlx, "./IMAGES/C1.xpm", &img_width, &img_height);
	data->sprites.E = mlx_xpm_file_to_image(data->mlx, "./IMAGES/E.xpm", &img_width, &img_height);
}

void ft_fill_characters(t_data *data)
{
	int	img_width;
	int	img_height;

	data->sprites.P[0] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P1.xpm", &img_width, &img_height);
	data->sprites.P[1] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P2.xpm", &img_width, &img_height);
	data->sprites.P[2] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P3.xpm", &img_width, &img_height);
	data->sprites.P[3] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P4.xpm", &img_width, &img_height);
	data->sprites.P[4] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P5.xpm", &img_width, &img_height);
	data->sprites.P[5] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P6.xpm", &img_width, &img_height);
	data->sprites.P[6] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P7.xpm", &img_width, &img_height);
	data->sprites.P[7] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P8.xpm", &img_width, &img_height);
	data->sprites.P[8] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P9.xpm", &img_width, &img_height);
	data->sprites.P[9] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P10.xpm", &img_width, &img_height);
	data->sprites.P[10] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P11.xpm", &img_width, &img_height);
	data->sprites.P[11] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P12.xpm", &img_width, &img_height);
	data->sprites.P[12] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P13.xpm", &img_width, &img_height);
	data->sprites.P[13] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P14.xpm", &img_width, &img_height);
	data->sprites.P[14] = mlx_xpm_file_to_image(data->mlx, "./IMAGES/P15.xpm", &img_width, &img_height);
}
