/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:24:52 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/28 16:32:39 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_frames(t_data *data)
{
	static int	i;

	ft_print_player(data);
	ft_print_blood(data);
	if (i++ == 2)
	{
		enemy_position(data);
		i = 0;
	}
	usleep(1000000 / 24);
	return (0);
}
