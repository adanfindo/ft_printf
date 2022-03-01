/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:04:34 by afindo            #+#    #+#             */
/*   Updated: 2022/03/01 14:04:51 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rearrange(int *argc, char ***argv, t_mall *mall)
{
	int	i;

	i = 0;
	if (*argc == 2)
	{
		*argv = ft_strsplit((*argv)[1], ' ');
		if (!(*argv))
			return (0);
		*argc = count_nb_word(*argv);
		mall->is_mall = 1;
		mall->argv = *argv;
	}
	else
	{
		while (i < *argc - 1)
		{
			(*argv)[i] = (*argv)[i + 1];
			i++;
		}
		(*argv)[i] = 0;
		(*argc)--;
	}
	return (1);
}
