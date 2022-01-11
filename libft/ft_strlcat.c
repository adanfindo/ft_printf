/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:02:23 by afindo            #+#    #+#             */
/*   Updated: 2022/01/11 14:24:22 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	unsigned int	ind;
	unsigned int	j_ind;
	unsigned int	count_dest;
	unsigned int	count_src;

	count_dest = ft_strlen(dest);
	count_src = ft_strlen(src);
	ind = 0;
	j_ind = count_dest;
	if (dstsize > count_dest)
	{
		while (j_ind < (dstsize - 1) && src[ind] != '\0')
		{
			dest[j_ind] = src[ind];
			j_ind++;
			ind++;
		}
	}
	else
		return (dstsize + count_src);
	dest[j_ind] = '\0';
	return (count_dest + count_src);
}
