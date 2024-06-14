/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumurata <sumurata@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 14:30:07 by sumurata          #+#    #+#             */
/*   Updated: 2024/05/18 15:02:26 by sumurata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	atoi_helper(const char *str, int i, int sign)
{
	long long	result;

	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result < (LONG_MAX - (str[i] - '0')) / 10 + 1)
			result = result * 10 + (str[i++] - '0');
		else
		{
			if (sign == 1)
				return (LONG_MAX);
			else
				return (LONG_MIN);
		}
	}
	return (result * sign);
}

long	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] == '+' || str[i] == '-')
		return (0);
	result = atoi_helper(str, i, sign);
	return (result);
}
