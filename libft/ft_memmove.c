/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:48:51 by afindo            #+#    #+#             */
/*   Updated: 2022/01/11 17:40:39 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	memmove(void *dest, void *src, size_t len)
{
	int	i;

	if (dest < src)
	{
		i = 0;
		while (i < len)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
	}
}
