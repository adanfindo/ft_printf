/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:36:13 by afindo            #+#    #+#             */
/*   Updated: 2022/02/25 11:36:14 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	error_exit(void)
{
	ft_putstr("error\n");
	exit(1);
}

int		check_only_number(int ac, char **av)
{
	int i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		if (av[i][j] == '-')
			j++;
		if (!ft_isdigit(av[i][j]))
			return (0);
		while (ft_isdigit(av[i][j]))
			j++;
		if (av[i][j])
			return (0);
		i++;
	}
	return (1);
}

int		check_doubles(t_stack *a, int ac)
{
	t_pswap *tmp;
	int		i;
	int		j;
	int		k;
	int		arr[ac + 1];

	tmp = a->head;
	i = 0;
	while (tmp)
	{
		arr[i++] = tmp->n;
		tmp = tmp->nxt;
	}
	j = -1;
	while (j++ < i)
	{
		k = j;
		while (++k < i)
			if (arr[j] == arr[k])
				return (0);
	}
	return (1);
}

void	lst_addend_fast(char *str, t_pswap **back)
{
	t_pswap *tmp;
	long	num;

	num = ft_atol(str);
	if (num > INT_MAX || num < INT_MIN)
		error_exit();
	if (*back == NULL)
		return ;
	tmp = malloc(sizeof(t_pswap));
	tmp->n = (int)num;
	tmp->nxt = NULL;
	(*back)->nxt = tmp;
	tmp->prv = *back;
	*back = tmp;
}

void	build_stack(t_stack *a, t_stack *b, char **av, int ac)
{
	int		i;
	t_pswap *tmp;

	i = 1;
	if (!check_only_number(ac, av) || !(a->head = malloc(sizeof(t_pswap))))
		error_exit();
	a->head->n = ft_atoi(av[i++]);
	a->head->prv = NULL;
	a->end = a->head;
	while (i < ac)
		lst_addend_fast(av[i++], &a->end);
	if (!check_doubles(a, ac))
	{
		while (a->head)
		{
			tmp = a->head;
			a->head = a->head->nxt;
			free(tmp);
		}
		error_exit();
	}
	b->head = NULL;
	b->end = NULL;
}
