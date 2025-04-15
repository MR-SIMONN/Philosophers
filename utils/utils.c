/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 05:16:53 by moel-hai          #+#    #+#             */
/*   Updated: 2025/04/15 02:49:33 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void    errors(char *str)
{
    printf ("%s\n", str);
    exit (1);
}

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}