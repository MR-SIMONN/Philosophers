/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 05:23:32 by moel-hai          #+#    #+#             */
/*   Updated: 2025/04/14 05:40:25 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

static int	skip_it(char *str, int *pi)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	*pi = i;
	return (sign);
}

int	ft_atoi(char	*str)
{
	int			i;
	int			s;
	long long	r;
	long long	prev_r;

	i = 0;
	r = 0;
	s = skip_it(str, &i);
	while ((str)[i] >= '0' && (str)[i] <= '9')
	{
		prev_r = r;
		r = r * 10 + (str[i++] - 48);
		if ((r / 10) != prev_r)
		{
			if (s > 0)
				return (-1);
			return (0);
		}
	}
	return (r * s);
}