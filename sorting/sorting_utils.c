/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:46:13 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/12 00:51:53 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	norm(t_list **stack_a, t_list **stack_b, t_interval *interval,
													int index)
{
	if ((*stack_b)->data == interval->arr[interval->bulk])
	{
		pa(stack_a, stack_b, 1);
		interval->bulk--;
	}
	else
	{
		if (*stack_a != NULL
			&& (interval->down == 0
				|| (*stack_b)->data > ft_lstlast(*stack_a)->data))
		{
			pa(stack_a, stack_b, 1);
			ra(stack_a, 1);
			interval->down++;
		}
		else
		{
			if (index > interval->bulk / 2)
				rrb(stack_b, 1);
			else
				rb(stack_b, 1);
		}
	}
}

void	from_b_to_a(t_list **stack_a, t_list **stack_b, t_interval *interval)
{
	int	index;

	interval->bulk = ft_lstsize(stack_b) - 1;
	while (interval->bulk >= 0)
	{
		index = index_precise(stack_b, interval->arr[interval->bulk]);
		if (index >= 0)
			norm(stack_a, stack_b, interval, index);
		else
		{
			rra(stack_a, 1);
			interval->down--;
			interval->bulk--;
		}
	}
	while (interval->down-- > 0)
		ra(stack_a, 1);
}

int	if_value_exist(t_list **stack_b, int nbr)
{
	t_list	*tmp;

	tmp = *stack_b;
	while (tmp)
	{
		if (tmp->data == nbr)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
