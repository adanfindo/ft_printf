/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:28:23 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:28:23 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*next;
	t_list	*res;

	if (lst)
	{
		if (!(new = (t_list*)malloc(sizeof(t_list*))))
			return (NULL);
		new = f(lst);
		res = new;
		while (lst->next)
		{
			if (!(next = (t_list*)malloc(sizeof(t_list*))))
				return (NULL);
			new->next = f(lst->next);
			new = new->next;
			lst = lst->next;
		}
		new->next = NULL;
		return (res);
	}
	return (NULL);
}
