/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushelem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:50:31 by agenoves          #+#    #+#             */
/*   Updated: 2022/01/31 17:17:47 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

// take the first element at the top of b and put it at the top of a. 
// Do nothing if b is empty.
void	ft_push_a(t_list *stack_a, t_list *stack_b)
{
	if (!stack_b)
		return ;
	stack_b->next = stack_a;
}
//  take the first element at the top of a and put it at the top of b.
//  Do nothing if a is empty.

void	ft_push_b(t_list *stack_a, t_list *stack_b)
{
	if (!stack_a)
		return ;
	stack_a->next = stack_b;
}

void	ft_printlst(t_list *head)
{
	t_list	*current_node;

	current_node = head;
	while (current_node != NULL)
	{
		printf("%d\n", current_node->data);
		current_node = current_node->next;
	}
}

int main()
{
	t_list	*list1;
	t_list	*list2;

	list1->data = 12;
	// list1->next = NULL;
	list2->data = 15;
	// list2->next = NULL;
	ft_push_b(list1, list2);
	ft_printlst(list1);
	ft_printlst(list2);
}
