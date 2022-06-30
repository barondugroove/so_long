/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_assets.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:58:40 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/29 14:44:01 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_fill_characters(t_data *data)
{
	int	img_width;
	int	img_height;

	data->sprites.p = mlx_xpm_file_to_image(data->mlx, \
	"./IMAGES/P1.xpm", &img_width, &img_height);
}

void	ft_create_assets(t_data *data)
{
	ft_fill_walls(data);
	ft_fill_characters(data);
	ft_fill_collectibles(data);
}
