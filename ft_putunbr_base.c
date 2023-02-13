/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:32:15 by afindo            #+#    #+#             */
/*   Updated: 2023/01/25 10:32:15 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	display_number(unsigned long nbr, char *base, int base_n)
{
	if (nbr > 0)
	{
		display_number(nbr / base_n, base, base_n);
		write(1, base + nbr % base_n, 1);
	}
}

static void	count_number(int *chars, unsigned long nbr, char *base, int base_n)
{
	if (nbr > 0)
	{
		count_number(chars, nbr / base_n, base, base_n);
		(*chars)++;
	}
}

void	ft_putunbr_base(unsigned long nbr, char *base)
{
	if (nbr == 0)
		write(1, base, 1);
	display_number(nbr, base, ft_strlen(base));
}

int	ft_countunbr_base(unsigned long nbr, char *base)
{
	int	n;

	if (nbr == 0)
		return (1);
	n = 0;
	count_number(&n, nbr, base, ft_strlen(base));
	return (n);
}
