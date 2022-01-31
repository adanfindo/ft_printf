/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapelem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:57:13 by agenoves          #+#    #+#             */
/*   Updated: 2022/01/31 15:51:18 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_swap_a(t_list *stack_a)
{
	int	temp;

	if (!stack_a || !stack_a->next)
		return ;
	temp = stack_a->data;
	stack_a->data = stack_a->next->data;
	stack_a->next->data = temp;
}

void	ft_swap_b(t_list *stack_b)
{
	int	temp;

	if (!stack_b || !stack_b->next)
		return ;
	temp = stack_b->data;
	stack_b->data = stack_b->next->data;
	stack_b->next->data = temp;
}

void	ft_swap_ab(t_list *stack_a, t_list *stack_b)
{
	ft_swap_a(stack_a);
	ft_swap_b(stack_b);
}
