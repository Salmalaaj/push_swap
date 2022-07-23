/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 04:52:53 by slaajour          #+#    #+#             */
/*   Updated: 2022/07/19 15:42:21 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	
	stack_b = NULL;
	if (argc >= 2)
	{
		check_args(argc, argv);
		i = 1;
		while (i < argc)
		{
			creat_stack_a(&stack_a, ft_atoi(argv[i]));
			i++;
		}
		afficher_stack(stack_a, 'A');
	}
	//system("leaks push_swap");
	return (0);
}
