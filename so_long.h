/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:13:04 by bchabot           #+#    #+#             */
/*   Updated: 2022/05/31 17:30:42 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define IMG_SIZE 32

# include<mlx.h>
# include<unistd.h>
# include<stdlib.h>
# include<fcntl.h>
# include "libft/libft.h"

typedef struct  s_data {
    void    *mlx;
    void    *mlx_win;
    void    *img_floor;
    void    *img_mur;
    char    **map;
    int     map_x;
    int     map_y;
}               t_data;

void	ft_fill_map(t_data *data);
void	ft_print_map(t_data *data);

#endif
