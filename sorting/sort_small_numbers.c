/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:44:09 by slaajour          #+#    #+#             */
/*   Updated: 2022/07/30 21:29:28 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_list **stack_a)
{
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa(*stack_a);
}

void	sort_tree(t_list **stack_a)
{
	while (stack_already_sorted(*stack_a) == 0)
	{
		if ((*stack_a)->data < (*stack_a)->next->data
			&& (*stack_a)->next->data > (*stack_a)->next->next->data
			&& (*stack_a)->data > (*stack_a)->next->next->data)
			rra(stack_a);
		else if ((*stack_a)->data > (*stack_a)->next->data
			&& (*stack_a)->data > (*stack_a)->next->next->data
			&& (*stack_a)->next->data < (*stack_a)->next->next->data)
			ra(stack_a);
		else
			sa(*stack_a);
	}
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	find_smallest(stack_a, stack_b);
	sort_tree(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	find_smallest(stack_a, stack_b);
	find_smallest(stack_a, stack_b);
	sort_tree(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
