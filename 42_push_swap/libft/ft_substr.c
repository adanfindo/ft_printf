/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:31:08 by afindo            #+#    #+#             */
/*   Updated: 2022/01/18 12:52:25 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*n_str;
	size_t			i;
	size_t			j;
	unsigned int	l;

	if (!s)
		return (0);
	l = ft_strlen(s);
	if (l < len)
		n_str = (char *)malloc(l * sizeof(char) + 1);
	else
		n_str = (char *)malloc(len * sizeof(char) + 1);
	if (!n_str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		n_str[j++] = s[i++];
	n_str[j] = '\0';
	return (n_str);
}
