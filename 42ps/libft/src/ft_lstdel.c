/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:27:47 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:27:48 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*todel;
	t_list	*lst;

	if (*alst)
	{
		lst = *alst;
		while (lst)
		{
			todel = lst;
			lst = todel->next;
			del(todel->content, todel->content_size);
			free(todel);
		}
		*alst = NULL;
	}
}
