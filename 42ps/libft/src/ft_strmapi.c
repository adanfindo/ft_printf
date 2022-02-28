/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:30:37 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:30:38 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int i, char))
{
	char			*res;
	unsigned int	i;

	if (s != NULL)
	{
		if (!(res = (char*)malloc(sizeof(*res) * (ft_strlen(s) + 1))))
			return (NULL);
		i = 0;
		while (i < ft_strlen(s))
		{
			res[i] = f(i, s[i]);
			i++;
		}
		res[i] = '\0';
		return (res);
	}
	else
		return (NULL);
}
