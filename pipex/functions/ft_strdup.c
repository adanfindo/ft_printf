/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42roma.it>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 22:06:30 by afindo          #+#    #+#             */
/*   Updated: 2022/03/13 19:24:56 by afindo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

char	*ft_strdup(const char *src)
{
	char	*cp;
	size_t	i;

	i = 0;
	cp = (char *)malloc(ft_strlen(src) + 1);
	if (!cp)
		return (NULL);
	while (src[i])
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
