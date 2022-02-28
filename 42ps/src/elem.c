/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elem.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:31:05 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 09:31:06 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int			add_elem(t_stack *stack, int new_nb)
{
	t_elem	*new_elem;

	if (!(new_elem = (t_elem*)malloc(sizeof(t_elem))))
	{
		free_stack(stack);
		return (0);
	}
	new_elem->nb = new_nb;
	new_elem->next = stack->first;
	if (new_elem->nb > stack->max)
		stack->max = new_elem->nb;
	if (new_elem->nb < stack->min)
		stack->min = new_elem->nb;
	stack->first = new_elem;
	stack->count++;
	return (1);
}

int			remove_elem(t_stack *stack)
{
	int		nb;
	t_elem	*todel;

	todel = stack->first;
	nb = todel->nb;
	stack->first = todel->next;
	free(todel);
	stack->count--;
	return (nb);
}
