/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:16:35 by afindo            #+#    #+#             */
/*   Updated: 2022/03/01 12:31:48 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <stdlib.h>

int	free_elem(int fd, t_list *elem)
{
	if (fd == -1 && elem != NULL)
	{
		free(elem->content);
		free(elem);
		return (1);
	}
	return (0);
}
