/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenoves <agenoves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:33:11 by agenoves          #+#    #+#             */
/*   Updated: 2022/01/31 17:17:37 by agenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

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

int	ft_fill_the_stack(int argc, char **argv)
{
	int		i;
	int		j;
	int		data;
	char	**a;
	t_list	*stack_a;
	t_list	*stack_b;

	i = 1;
	while (i < argc)
	{
		a = ft_split(argv[i], ' ');
		j = 0;
		while (a[j] != '\0')
		{
			data = ft_atoi(a[j]);
			ft_lstadd_back(&stack_a, ft_lstnew(data));
			j++;
		}
		i++;
	}
	ft_push_b(stack_a, stack_b);
	// t_printlst(stack_a);
	ft_printlst(stack_b);
	return ((int)stack_a);
}

/* int	main(int argc, char **argv)
{
	t_list	*stack_b;

	ft_fill_the_stack(argc, argv);
}
*/