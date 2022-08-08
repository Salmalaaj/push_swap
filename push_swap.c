/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 04:52:53 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/08 09:34:27 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*arr;
	int		i;

	stack_b = NULL;
	arr = NULL;
	if (argc >= 2)
	{
		check_args(argc, argv);
		i = 1;
		while (i < argc)
		{
			creat_stack_a(&stack_a, ft_atoi(argv[i]));
			i++;
		}
		//afficher_stack(&stack_a, 'A');
		if (stack_already_sorted(stack_a) == 0)
			start_sorting(&stack_a, &stack_b, argc - 1);
		//afficher_stack(&stack_a, 'A');
	}
	return (0);
}
