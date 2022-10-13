/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_pov.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:36:45 by afindo            #+#    #+#             */
/*   Updated: 2022/10/13 12:36:46 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	render_pov(t_data *data, t_image *image)
{
	int	i;

	i = 0;
	while (i < SCREEN_WIDTH)
	{
		ray_cast(data, image, i);
		i++;
	}
}
