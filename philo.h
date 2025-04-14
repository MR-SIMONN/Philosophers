/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 05:05:49 by moel-hai          #+#    #+#             */
/*   Updated: 2025/04/14 23:53:20 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHILO_H
# define PHILO_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

typedef struct s_philo
{
    int                 nbr_of_philos;
    int     time_to_die;
    int     time_to_eat;
    int     time_to_sleep;
    int                 must_eat;
} t_philo;

void    parsing(int ac, char **av, t_philo ph_data);
int	    ft_atoi(char	*str);
void    errors(char *str);

# endif