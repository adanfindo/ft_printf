/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.roma42.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:27:08 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:27:10 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <stdlib.h>

void		ft_error(char *exit_message)
{
	ft_putendl_fd(exit_message, 2);
	exit(EXIT_FAILURE);
}
