/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:23:50 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/29 14:38:53 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

static int	close_hook(t_data *data)
{
	close_win(data);
	return (0);
}

int	ft_game(char *map)
{
	t_data		data;

	data.p_pos_x = 0;
	data.p_pos_y = 0;
	data.p_dir = 0;
	data.c_count = 0;
	data.map_path = map;
	ft_check_map_path(&data);
	ft_fill_map(&data);
	ft_check_errors(&data);
	data.mlx = mlx_init();
	ft_create_assets(&data);
	data.mlx_win = mlx_new_window(data.mlx, data.map_x * IMG_SIZE, \
	data.map_y * IMG_SIZE, "so_long");
	ft_print_map(&data);
	mlx_key_hook(data.mlx_win, ft_inputs, &data);
	mlx_hook(data.mlx_win, 17, 0, close_hook, &data);
	mlx_loop(data.mlx);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_game(argv[1]);
	else if (argc == 1)
		ft_printf("Error\nThe map argument seems to be missing, try again.");
	else if (argc > 2)
		ft_printf("Error\nToo many map arguments, please try again.");
	return (0);
}
