/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:13:04 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/28 20:49:52 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define IMG_SIZE 32 
# define BLOOD_FRAMES 13 
# define PLAYER_FRAMES 14 
# define ENEMY_FRAMES 3 
# define CHEST_FRAMES 4 

# include "mlx_linux/mlx.h"
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <fcntl.h>
# include "libft/libft.h"

typedef struct  s_sprites {
	void	*coinHD;
	void	*coinHG;
	void	*coinBD;
	void	*coinBG;
	void	*wallu;
	void	*walld;
	void	*wallr;
	void	*wallg;
	void	*floor;
	void	*C[CHEST_FRAMES + 1];
	void	*P[PLAYER_FRAMES + 1];
	void	*D[ENEMY_FRAMES + 1];
	void	*E;
	void	*B[BLOOD_FRAMES + 1];
}	t_sprites;

typedef struct  s_data {
    void    *mlx;
    void    *mlx_win;
    char    **map;
    char    *map_path;
	int		p_dir;
	int		c_count;
	int		p_pos_x;
	int		p_pos_y;
    int     map_x;
    int     map_y;
	t_sprites	sprites;
}               t_data;

void	ft_create_assets(t_data *data);
void	ft_fill_map(t_data *data);
void	ft_fill_walls(t_data *data);
void	ft_fill_water(t_data *data);
void	ft_fill_water_2(t_data *data);
void	ft_fill_collectibles(t_data *data);
void	ft_fill_characters(t_data *data);
void	ft_fill_characters_2(t_data *data);
void	ft_fill_enemies(t_data *data);
int		ft_frames(t_data *data);
void	ft_print_blood(t_data *data);
void	ft_print_map(t_data *data);
void	ft_print_player(t_data *data);
void	ft_print_walls(t_data *data, int x, int y);
void	ft_print_sprite(t_data *data, int x, int y, void *sprite);
int		close_win(t_data *data);
int		ft_inputs(int keycode, t_data *data);
void	ft_player_collision(t_data *data, int p_dir_x, int p_dir_y);
void	ft_move_player(t_data *data, int p_dir_x, int p_dir_y);
void	ft_print_move_counter(t_data *data, int moves);
void	ft_check_map_path(t_data *data);
void	ft_check_errors(t_data *data);
int		ft_check_rectangle(t_data *data);
int		ft_check_borders(t_data *data);
int		ft_check_assets(t_data *data);
void	ft_close_error(t_data *data);
void	enemy_position(t_data *data);
void	move_enemy(t_data *data, int *pos, int *dir);

#endif
