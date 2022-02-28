/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:31:32 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 09:31:34 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sort_three(t_stack *stack_a)
{
	int	first;
	int	second;
	int	third;

	first = stack_a->first->nb;
	second = stack_a->first->next->nb;
	third = stack_a->first->next->next->nb;
	if (first > second && second > third && first > third)
	{
		do_print_sa(stack_a);
		do_print_rra(stack_a);
	}
	else if (first < second && second > third && first < third)
	{
		do_print_rra(stack_a);
		do_print_sa(stack_a);
	}
	else if (first > second && second < third && first < third)
		do_print_sa(stack_a);
	else if (first < second && second > third && first > third)
		do_print_rra(stack_a);
	else if (first > second && second < third && first > third)
		do_print_ra(stack_a);
}

void	sort_two(t_stack *stack_a)
{
	if (stack_a->first->nb > stack_a->first->next->nb)
		do_print_sa(stack_a);
	return ;
}
