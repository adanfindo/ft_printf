/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:31:08 by afindo            #+#    #+#             */
/*   Updated: 2022/01/17 14:16:01 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*n_str;
	size_t	i;
	size_t	j;

	n_str = (char *)malloc(len + 1);
	if (!s || !n_str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		n_str[j++] = s[i++];
	n_str[j] = '\0';
	return (n_str);
}
