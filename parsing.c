/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 05:12:56 by moel-hai          #+#    #+#             */
/*   Updated: 2025/04/15 03:12:27 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int valid_nbr(char *str)
{
    int i;

    i = 0;
    if (str[i] == '+')
        i++;
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

int not_valid_args (char **av)
{
    int i;

    i = 1;
    while (av[i])
    {
        if (!valid_nbr(av[i]))
            return (1);
        i++;
    }
    return (0);
}

int some_member_failed(t_philo p)
{
    return (p.nbr_of_philos <= 0 || p.nbr_of_philos > 200 || p.time_to_die < 60
    || p.time_to_eat < 60 || p.time_to_sleep < 60);
}

void    parsing(int ac, char **av, t_philo ph_data)
{
    if (ac != 5 && ac != 6)
        errors("invalid amount of arguments !!");
    if (not_valid_args(av))
        errors("invalid numbers --->   🚫");
    ph_data.nbr_of_philos = ft_atoi(av[1]);
    ph_data.time_to_die = ft_atoi(av[2]);
    ph_data.time_to_eat = ft_atoi(av[3]);
    ph_data.time_to_sleep = ft_atoi(av[4]);
    ph_data.must_eat = -1;
    if (ac == 6)
    {
        ph_data.must_eat = ft_atoi(av[5]);
        if (ph_data.must_eat <= 0)
            errors("🚫");
    }
    if (some_member_failed(ph_data))
        errors("🚫");
    else
        errors("✅");
}