/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:28:37 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:28:38 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t						i;
	unsigned char				*res;
	const unsigned char			*source;

	i = 0;
	res = dst;
	source = src;
	while (i < n)
	{
		res[i] = source[i];
		dst++;
		if (source[i] == (unsigned char)c)
			return (dst);
		i++;
	}
	return (NULL);
}
