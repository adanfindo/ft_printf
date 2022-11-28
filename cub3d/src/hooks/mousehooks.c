/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mousehooks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:32:07 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/11 21:49:26 by lschrafs         ###   ########.fr       */
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
