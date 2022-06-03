/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:48:09 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/03 20:45:30 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	ft_map_height(t_data *data)
{
	int 	i;
	int 	fd;
	char	*line;

	i = 0;
	fd = open("map1.ber", O_RDONLY);
	line = get_next_line(fd);
	data->map_x = ft_strlen(line);
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		i++;
	}
	data->map_y = i - 1;
	free(line);
}

void	ft_fill_map(t_data *data)
{
	int	i;
	int	fd;

	i = 0;
	fd = open("map.ber", O_RDONLY);
	ft_map_height(data);
	data->map = malloc(sizeof(char *) * data->map_y + 1);
	data->map[i] = get_next_line(fd);
	while (data->map[i])
	{
		i++;
		data->map[i] = get_next_line(fd);
	}
}
