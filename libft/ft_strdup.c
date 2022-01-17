/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:10:55 by afindo            #+#    #+#             */
/*   Updated: 2022/01/17 14:45:46 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)(malloc(ft_strlen(s1) + 1));
	if (!s2)
		return (0);
	ft_memcpy (s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
