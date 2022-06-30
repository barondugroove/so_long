/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_utils_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:05:15 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/30 12:08:19 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_check_rectangle(t_data *data)
{
	int		i;
	size_t	len;

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

int	ft_check_borders(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->map_x)
	{
		if (data->map[0][i] != '1')
			return (1);
		if (data->map[data->map_y - 1][i] != '1')
			return (1);
		i++;
	}
	i = 0;
	while (i < data->map_y)
	{
		if (data->map[i][0] != '1')
			return (1);
		if (data->map[i][data->map_x - 1] != '1')
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_items(t_data *data, int p, int e)
{
	if (p == 0 || p > 1 || data->c_count == 0 || e == 0)
		return (1);
	else
		return (0);
}

void	ft_error_items(t_data *data)
{
	ft_printf("Error\nWrong items on the map.\n");
	ft_close_error(data);
}

int	ft_check_assets(t_data *d)
{
	int	p;
	int	e;
	int	i[2];

	p = 0;
	e = 0;
	i[0] = -1;
	i[1] = -1;
	while (++i[0] < d->map_y)
	{
		while (++i[1] < d->map_x)
		{
			if (d->map[i[0]][i[1]] == 'P')
				p++;
			else if (d->map[i[0]][i[1]] == 'C')
				d->c_count++;
			else if (d->map[i[0]][i[1]] == 'E')
				e++;
			else if (d->map[i[0]][i[1]] != 'D' && d->map[i[0]][i[1]] != '0' \
			&& d->map[i[0]][i[1]] != '1')
				ft_error_items(d);
		}
		i[1] = -1;
	}
	return (ft_check_items(d, p, e));
}
