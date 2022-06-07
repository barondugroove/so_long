/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchabot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:24:52 by bchabot           #+#    #+#             */
/*   Updated: 2022/06/07 17:16:32 by bchabot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_frames(t_data *data)
{
	//ft_print_player(data);
	ft_print_blood(data);
	usleep(1000000 / 10);
	return (0);
}