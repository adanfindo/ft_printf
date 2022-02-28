/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:31:01 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:31:01 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char	*res;

	if (!(res = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	res = ft_memset(res, '\0', size + 1);
	return (res);
}
