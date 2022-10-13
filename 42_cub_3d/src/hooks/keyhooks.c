/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:39:48 by afindo            #+#    #+#             */
/*   Updated: 2022/10/13 12:39:51 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

static void	handle_key(int keycode, t_data *data, bool pressed)
{
	if (keycode == KEY_W)
		data->player->mov_forward = pressed;
	if (keycode == KEY_S)
		data->player->mov_backward = pressed;
	if (keycode == KEY_A)
		data->player->strafe_left = pressed;
	if (keycode == KEY_D)
		data->player->strafe_right = pressed;
	if (keycode == KEY_ARROW_LEFT)
		data->player->rot_left = pressed;
	if (keycode == KEY_ARROW_RIGHT)
		data->player->rot_right = pressed;
}

int	hook_key_press(int keycode, t_data *data)
{
	handle_key(keycode, data, true);
	return (0);
}

int	hook_key_release(int keycode, t_data *data)
{
	if (keycode == KEY_ESCAPE)
		cub_exit(data, 0);
	if (keycode == KEY_E)
		open_door(data);
	handle_key(keycode, data, false);
	return (0);
}
