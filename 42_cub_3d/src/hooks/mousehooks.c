/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mousehooks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:39:42 by afindo            #+#    #+#             */
/*   Updated: 2022/10/13 12:39:43 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	hook_mouse(int x, int y, t_data *data)
{
	int	octant;

	(void) y;
	octant = SCREEN_WIDTH / 8;
	data->player->rot_left = (x < octant);
	data->player->rot_right = (x > SCREEN_WIDTH - octant);
	return (0);
}
