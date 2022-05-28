/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:00:23 by bchabot           #+#    #+#             */
/*   Updated: 2022/05/27 12:04:48 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int	ft_map_heigths(t_data *data)
{
	while (get_next_line(fd))
		i++;
	return (i);
}

void	ft_fill_map(t_data *data)
{
	int	i;

	i = 0;
	data->map = malloc(sizeof(t_data) * ft_map_heigths(data->map) + 1);
	while (get_next_line(fd))
	{
		data->map[i] = get_next_line(fd);
		i++;
	}
}
