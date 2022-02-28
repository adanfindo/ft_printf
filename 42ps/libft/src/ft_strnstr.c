/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:31:05 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:31:05 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!s2[0])
		return ((char*)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s2[j] == s1[i + j] && s2[j] && i + j < n)
				j++;
			if (s2[j] == '\0')
				return ((char*)(s1 + i));
		}
		i++;
	}
	return (NULL);
}
