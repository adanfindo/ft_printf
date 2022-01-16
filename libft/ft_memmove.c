/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:48:51 by afindo            #+#    #+#             */
/*   Updated: 2022/01/16 14:20:23 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isascii(int c)
void	ft_bzero(void *s, size_t n)
int	ft_isalnum(int c)
int	ft_isalpha(int c)
int	ft_isdgit(int c)
int	ft_isprint(int c)
void	ft_memcpy(void *dst, const void *src, size_t n)
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
