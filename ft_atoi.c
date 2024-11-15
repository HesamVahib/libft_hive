/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havhib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:12:33 by havhib            #+#    #+#             */
/*   Updated: 2024/11/16 00:08:45 by havhib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	big_int(int sign)
{
	if (sign == 1)
		return (2147483647);
	if (sign == -1)
		return (-2147483648);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		num;

	i = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num > (2147483647 - (str[i] - '0')) / 10)
		{
			return (big_int(sign));
		}
		num = num * 10 + (str[i++] - '0');
	}
	return (num * sign);
}
