/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: havhib <hvahib@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:12:33 by havhib            #+#    #+#             */
/*   Updated: 2024/11/18 13:50:44 by havhib           ###   ########.fr       */
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

int	very_big_checker(const char *str, int sign)
{
	size_t	count;

	count = 0;
	while (str[count] && (str[count] >= '0' && str[count] <= '9'))
	{
		count++;
		if (count > 18 && sign == -1)
			return (0);
		else if (count > 17 && sign == 1)
			return (-1);
	}
	return (1);
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
	if (very_big_checker(&str[i], sign) <= 0)
		return (very_big_checker((char *)str, sign));
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num > (2147483647 - (str[i] - '0')) / 10)
			return (big_int(sign));
		num = num * 10 + (str[i++] - '0');
	}
	return (num * sign);
}
