/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:30:00 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:30:00 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	i;

	if (!(dup = (char *)malloc(sizeof(*dup) * (ft_strlen(s1) + 1))))
		return (0);
	i = 0;
	while (i < ft_strlen(s1))
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
