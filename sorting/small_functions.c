/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 02:47:54 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/11 09:15:23 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	initialisation(t_interval *interval, int argc)
{
	interval->size = argc;
	interval->min = 0;
	interval->centre = argc / 2;
	interval->max = argc - 1;
	interval->down = 0;
	interval->arr = malloc(sizeof(int) * argc);
	if (!interval->arr)
		return ;
}

void	make_interval(t_interval *interval, int i)
{
	interval->max = interval->centre + (interval->offset * i);
	interval->min = interval->centre - (interval->offset * i);
}

int	checking_the_size(int argc)
{
	if (argc <= 150)
		return (0);
	return (1);
}

void	remake_inter(t_interval *interval, int argc)
{
	interval->min = 0;
	interval->max = argc - 1;
	argc = -1;
}
