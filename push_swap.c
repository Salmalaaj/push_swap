/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 04:52:53 by slaajour          #+#    #+#             */
/*   Updated: 2022/05/25 21:36:59 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*tab;
	int	i;
	int	j;

	i = 0;
	j = 1;
	tab = malloc(sizeof(int) * argc - 1);
	if (tab[i] <= 1)
		exit(0);
	while (argv[i++])
		digit(argv[i]);
	i = 0;
	while (i < argc - 1)
		tab[i++] = ft_atoi(argv[j++]);
	duplicated(tab, argc - 1);
		// int i;
		// i = 1;
		// if (argc != 1)
		// {
		// 	digit(argv[i]);
		// 	i++;
		// }
}
