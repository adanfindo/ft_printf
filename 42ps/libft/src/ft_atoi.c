/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afindo <afindo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:16:51 by afindo            #+#    #+#             */
/*   Updated: 2022/02/28 12:16:51 by afindo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_atoi(const char *str)
{
	int	i;
	int res;
	int signe;

	signe = 1;
	res = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		signe = 44 - str[i];
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + signe * (str[i] - '0');
		i++;
	}
	return (res);
}
