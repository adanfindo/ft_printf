/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:28:49 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:28:50 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*res;
	const char	*source;

	res = dst;
	source = src;
	i = 0;
	while (i < n)
	{
		res[i] = source[i];
		i++;
	}
	return (dst);
}
