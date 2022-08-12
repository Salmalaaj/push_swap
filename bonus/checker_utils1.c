/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 04:15:41 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/12 01:01:10 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swapping(int *first, int *second)
{
	int	tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}

void	sa(t_list *stack_a, int ecrire)
{
	if (stack_a && stack_a->next)
		swapping(&stack_a->data, &stack_a->next->data);
	if (ecrire)
		write(1, "sa\n", 3);
}

void	sb(t_list *stack_b, int ecrire)
{
	if (stack_b && stack_b->next)
		swapping(&stack_b->data, &stack_b->next->data);
	if (ecrire)
		write(1, "sb\n", 1);
}

void	ss(t_list *stack_a, t_list *stack_b, int ecrire)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	if (ecrire)
		write(1, "ss\n", 3);
}
