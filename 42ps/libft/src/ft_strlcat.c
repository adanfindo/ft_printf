/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:30:17 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:30:18 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l_dst;
	size_t	l_src;
	size_t	i;
	size_t	res;

	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	i = 0;
	while (*dst)
		dst++;
	if (size <= l_dst)
		return (size + l_src);
	else
	{
		while (src[i] && i < size - l_dst - 1)
		{
			dst[i] = src[i];
			i++;
		}
		res = l_dst + l_src;
		dst[i] = '\0';
	}
	return (res);
}
