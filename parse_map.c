/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:48:09 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/15 11:54:41 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

void	ft_map_height(t_data *data)
{
	int 	i;
	int 	fd;
	char	*line;

	i = 0;
	fd = open(data->map_path, O_RDONLY);
	line = get_next_line(fd);
	if (!line)
	{
		ft_printf("Error\nThe map file is empty or does not exist, please try again.");
		exit(0);
	}
	data->map_x = ft_strlen(line) - 1;
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		i++;
	}
	data->map_y = i;
	free(line);
	close(fd);
}

void	ft_fill_map(t_data *data)
{
	int	i;
	int	fd;

	i = 0;
	fd = open(data->map_path, O_RDONLY);
	ft_map_height(data);
	data->map = malloc(sizeof(char *) * data->map_y + 1);
	if (!data->map)
		return ;
	while (i < data->map_y)
	{
		data->map[i] = get_next_line(fd);
		i++;
	}
	close(fd);
}
