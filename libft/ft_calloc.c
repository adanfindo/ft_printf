/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:52:34 by lschrafs          #+#    #+#             */
/*   Updated: 2022/04/29 19:18:07 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

// Allocates nulled memory
void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	buf;

	buf = count * size;
	if (count != 0 && buf / count != size)
		return (NULL);
	p = malloc(buf);
	ft_bzero(p, buf);
	return (p);
}
