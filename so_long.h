/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:13:04 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/13 15:38:16 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define IMG_SIZE 32 
# define BLOOD_FRAMES 13 
# define PLAYER_FRAMES 14 

# include<mlx.h>
# include<unistd.h>
# include<stdlib.h>
# include<fcntl.h>
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
	void	*C1;
	void	*P[PLAYER_FRAMES + 1];
	void	*E;
	void	*B[BLOOD_FRAMES + 1];
}	t_sprites;

typedef struct  s_data {
    void    *mlx;
    void    *mlx_win;
    void    *img_floor;
    void    *img_mur;
    char    **map;
	int		p_dir;
	int		p_pos_x;
	int		p_pos_y;
    int     map_x;
    int     map_y;
	t_sprites	sprites;
}               t_data;

void	ft_fill_map(t_data *data);
void	ft_fill_walls(t_data *data);
void	ft_fill_floors(t_data *data);
void	ft_fill_collectibles(t_data *data);
void	ft_fill_characters(t_data *data);
int		ft_frames(t_data *data);
void	ft_print_blood(t_data *data);
void	ft_print_map(t_data *data);
void	ft_print_player(t_data *data);
void	ft_print_walls(t_data *data, int x, int y);
void	ft_print_sprite(t_data *data, int x, int y, void *sprite);

#endif
