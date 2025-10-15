/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:23:06 by lucpardo          #+#    #+#             */
/*   Updated: 2025/10/15 21:50:01 by lucpardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <pthread.h>
# include <unistd.h>
# include <sys/time.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include <limits.h>

typedef enum e_status
{
	THINKING,
	EATING,
	SLEEPING,
	DIED,
	FORK_TAKEN,
} t_status;

// parsing
int	validate_args
int	parse_args

// initialization 
int	init_data
int	init_mutex
int	init_philosophers
int	init_forks

// threads
int	create_threads

// actions

// monitor

// utilities
void	print_status
void	print_death
int	ft_atol(const char *str);

// cleanup

// error handling

#endif
