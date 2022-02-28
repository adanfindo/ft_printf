/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:31:08 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:31:08 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;
	size_t	last;
	int		find;

	find = 0;
	str = (char*)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			last = i;
			find = 1;
		}
		i++;
	}
	if ((char)c == '\0')
		return (str + i);
	if (find == 1)
		return (str + last);
	return (NULL);
}
