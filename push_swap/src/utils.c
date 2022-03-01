/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:30:36 by afindo            #+#    #+#             */
/*   Updated: 2022/03/01 14:05:40 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

t_elem	*max(t_stack *a)
{
	a->max = -2147483648;
	a->max1 = -2147483648;
	a->max2 = -2147483648;
	return (a-> first);
}

void	find_max(t_stack *a)
{
	t_elem	*act;

	act = max(a);
	while (act)
	{
		if (act->nb > a->max)
			a->max = act->nb;
		else
			a->max = a->max;
		act = act->next;
	}
	act = a->first;
	while (act)
	{
		if (act->nb > a->max1 && act->nb != a->max)
			a->max1 = act->nb;
		act = act->next;
	}
	act = a->first;
	while (act)
	{
		if (act->nb > a->max2 && act->nb != a->max && act->nb != a->max1)
			a->max2 = act->nb;
		act = act->next;
	}
}

int	count_nb_word(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}
