/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:29:30 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:29:30 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	if (str)
	{
		while (*str)
		{
			ft_putchar_fd(*str, fd);
			++str;
		}
	}
}
