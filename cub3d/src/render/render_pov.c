/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_pov.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:10:58 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/13 13:14:28 by lschrafs         ###   ########.fr       */
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
