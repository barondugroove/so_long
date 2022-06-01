/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sprites.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:57:15 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/01 21:34:17 by bchabot          ###   ########.fr       */
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
	data->sprites.wallb = mlx_xpm_file_to_image(data->mlx, "./IMAGES/wallb.xpm", &img_width, &img_height);
	data->sprites.walld = mlx_xpm_file_to_image(data->mlx, "./IMAGES/walld.xpm", &img_width, &img_height);
	data->sprites.wallg = mlx_xpm_file_to_image(data->mlx, "./IMAGES/wallg.xpm", &img_width, &img_height);
}

void	ft_fill_floors(t_data *data)
{
	int	img_width;
	int	img_height;

	data->sprites.floor = mlx_xpm_file_to_image(data->mlx, "./IMAGES/floor.xpm", &img_width, &img_height);
}
