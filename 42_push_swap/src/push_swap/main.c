/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:29:14 by afindo            #+#    #+#             */
/*   Updated: 2022/02/25 11:29:17 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_all(t_stack *a, t_list *cmnd)
{
	t_pswap *tmp;
	t_list	*tmp_a;

	while (a->head)
	{
		tmp = a->head;
		a->head = a->head->nxt;
		free(tmp);
	}
	while (cmnd)
	{
		tmp_a = cmnd;
		free(cmnd->content);
		cmnd = cmnd->next;
		free(tmp_a);
	}
	free(a->p);
}

int		main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	t_list	*cmnd;

	build_stack(&a, &b, av, ac);
	if (!(a.p = malloc(sizeof(t_pswap*) * ac)) ||
	!(b.p = malloc(sizeof(t_pswap*) * ac)))
		exit(1);
	a.ac = ac;
	b.ac = ac;
	a.top = 0;
	b.top = 0;
	a.p[a.top] = NULL;
	b.p[a.top] = NULL;
	cmnd = solver(&a, &b);
	while (cmnd != NULL)
	{
		ft_putstr((char *)cmnd->content);
		cmnd = cmnd->next;
	}
	free(b.p);
	free_all(&a, cmnd);
}
