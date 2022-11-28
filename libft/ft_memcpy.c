/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:58:55 by lschrafs          #+#    #+#             */
/*   Updated: 2022/05/11 10:23:12 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// Copies n spaces of memory from src to dst. Don't overlap!
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*start;

	start = dst;
	while (n--)
		*start++ = *((unsigned char *)src++);
	return (dst);
}
