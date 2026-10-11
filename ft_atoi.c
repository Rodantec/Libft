/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodantec <rodantec@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:08:49 by rodantec          #+#    #+#             */
/*   Updated: 2024/10/30 07:51:02 by rodantec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		i;
	long	result;
	int		sign;
	long	tmp;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = result;
		result = result * 10 + str[i++] - '0';
		if (tmp > result && sign == 1)
			return (-1);
		if (tmp > result && sign == -1)
			return (0);
	}
	return (result * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main (void)
{
	printf("%d\n",atoi("+50"));
	printf("%d",ft_atoi("+50"));
}*/