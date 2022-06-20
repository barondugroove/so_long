/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:05:15 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/20 16:29:23 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_check_rectangle(t_data *data)
{
	int i;
	size_t len;

	i = 1;
	len = ft_strlen(data->map[0]);
	while (i < data->map_y)
	{
		if (ft_strlen(data->map[i]) != len)
			return (1);
		i++;
	}
	return (0);
}

int ft_check_borders(t_data *data)
{
	int i;

	i = 0;
	while (i < data->map_x)
	{
		if (data->map[0][i] != '1')
		{
			ft_printf("LOL");
			return (1);
		}
		if (data->map[data->map_y - 1][i] != '1')
		{
			ft_printf("CAC");
			return (1);
		}
		i++;
	}
	i = 0;
	while (i < data->map_y)
	{
		if (data->map[i][0]!= '1')
			return (1);
		if (data->map[i][data->map_x - 1] != '1')
			return (1);
		i++;
	}
	return (0);
}

int ft_check_assets(t_data *data)
{
	int p;
	int e;
	int i;
	int j;


	p = 0;
	e = 0;
	i = 0;
	j = 0;
	while (i < data->map_y)
	{
		while (j < data->map_x)
		{
			if (data->map[i][j] == 'P')
				p++;
			if (data->map[i][j] == 'C')
				data->c_count++;
			if (data->map[i][j] == 'E')
				e++;
			j++;
		}
		i++;
		j = 0;
	}
	if (p == 0 || p > 1 || data->c_count == 0 || e == 0)
		return (1);
	else
		return (0);
}
