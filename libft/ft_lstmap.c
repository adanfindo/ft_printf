/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:10:31 by afindo            #+#    #+#             */
/*   Updated: 2022/01/18 12:11:31 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*lsttemp;

	if (lst == NULL || f == NULL)
		return (NULL);
	lst2 = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	while (lst)
	{
		lsttemp = ft_lstnew((*f)(lst->content));
		if (lsttemp == NULL)
		{
			ft_lstclear(&lst2, del);
			break ;
		}
		if (lst2 != NULL)
			ft_lstadd_back(&lst2, lsttemp);
		lst = lst->next;
	}
	return (lst2);
}
