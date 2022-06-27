/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:24:52 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/27 16:25:05 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_frames(t_data *data)
{
	ft_print_player(data);
	ft_print_blood(data);
	enemy_position(data);
	usleep(1000000 / 15);
	return (0);
}
