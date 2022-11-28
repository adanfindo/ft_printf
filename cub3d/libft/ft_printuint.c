/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:00:33 by lschrafs          #+#    #+#             */
/*   Updated: 2022/05/07 17:49:55 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printuint(unsigned int i)
{
	int		ans;
	char	c;

	ans = 0;
	if (i > 9)
	{
		ans += ft_printuint(i / 10);
	}
	c = i % 10 + 48;
	write(1, &c, 1);
	ans ++;
	return (ans);
}
