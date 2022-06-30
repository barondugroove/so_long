/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:14:46 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/29 12:34:22 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_close_error(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->map_y)
		free(data->map[i++]);
	free(data->map);
	ft_printf("The program has been shut down due to an error.\n");
	exit(0);
}

void	ft_check_map_path(t_data *data)
{
	int		i;
	char	*ext;

	i = 1;
	ext = ".ber";
	while (i < 5)
	{
		if (data->map_path[ft_strlen(data->map_path) - i] != ext[4 - i])
		{
			ft_printf("Error\nThe map file extension is wrong.\n");
			exit(0);
		}
		else
			i++;
	}
}

void	ft_check_errors(t_data *data)
{
	if (ft_check_rectangle(data))
	{
		ft_printf("Error\nThe map is not a rectangle.\n");
		ft_close_error(data);
	}
	if (ft_check_borders(data))
	{
		ft_printf("Error\nThe map is not surrounded by walls ('1').\n");
		ft_close_error(data);
	}
	if (ft_check_assets(data))
	{
		ft_printf("Error\nItems are missing on the map.\n");
		ft_close_error(data);
	}
}
