/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:40:40 by lschrafs          #+#    #+#             */
/*   Updated: 2022/05/02 14:09:47 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// Nulls n bytes of memory beginning at s
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	i = 0;
	while (i < n)
	{
		c = s + i;
		*c = '\0';
		i++;
	}
}
