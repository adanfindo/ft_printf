/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:28:23 by afindo            #+#    #+#             */
/*   Updated: 2022/03/01 12:34:48 by afindo           ###   ########.fr       */
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
		new = (t_list *)malloc(sizeof(t_list *));
		if (!(new))
			return (NULL);
		new = f(lst);
		res = new;
		while (lst->next)
		{
			next = (t_list *)malloc(sizeof(t_list *));
			if (!(next))
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
