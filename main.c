/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:23:50 by bchabot           #+#    #+#             */
/*   Updated: 2022/05/31 17:34:37 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void ft_fill_images(t_data *data)
{
	int		img_width;
	int		img_height;

	data->img_floor = mlx_xpm_file_to_image(data->mlx, "./IMAGES/floor_1.xpm", &img_width, &img_height);
	data->img_mur = mlx_xpm_file_to_image(data->mlx, "./IMAGES/mur.xpm", &img_width, &img_height);
}

int	main(void)
{
	t_data	data;

	data.mlx = mlx_init();
	data.mlx_win = mlx_new_window(data.mlx, 1080, 720, "LAMINILIBX");
	ft_fill_images(&data);
	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img_floor, 2 * IMG_SIZE, 2 * IMG_SIZE);
	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img_mur, 0 * IMG_SIZE, 0 * IMG_SIZE);
	ft_fill_map(&data);
	ft_print_map(&data);
	mlx_loop(data.mlx);
	return (0);
}
