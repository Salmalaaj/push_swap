/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 06:14:39 by slaajour          #+#    #+#             */
/*   Updated: 2022/05/25 07:54:03 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	digit(char *av)
{
	int	i;

	i = 0;
	while (av[i] == ' ')
		i++;
	if (!av)
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	while (av[i])
	{
		if (av[i] == '+' || av[i] == '-')
			i++;
		if (av[i] < 48 || av[i] > 57)
		{
			write(1, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	if (str[i] > 2147483647 && str[i] < -2147483648)
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - 48);
		i++;
	}
	return (n * sign);
}

void	duplicated(int *dup, int num)
{
	int	index;
	int	j;

	index = 0;
	while (dup[index])
	{
		j = index + 1;
		while (j < num)
		{
			if (dup[index] == dup[j])
			{
				write(1, "Error\n", 6);
				exit(0);
			}
		}
		index++;
	}
}
