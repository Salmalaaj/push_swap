/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:46:13 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/08 10:15:53 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	from_b_to_a(t_list **stack_a, t_list **stack_b, t_interval *interval)
{
	int	down;
	int	size;
	int	index;

	down = 0;
	size = ft_lstsize(stack_b) - 1;
	while (size >= 0)
	{
		//if (*stack_a == NULL)
		//	break;
		index = index_precise(stack_b, interval->arr[size]);
		if (index >= 0)
		{
			if ((*stack_b)->data == interval->arr[size])
			{
				pa(stack_a, stack_b);
				size--;
			}
			else
			{
				if (*stack_a != NULL &&( down == 0 || (*stack_b)->data > ft_lstlast(*stack_a)->data))
				{
					pa(stack_a, stack_b);
					ra(stack_a);
					down++;
				}
				else
				{
					if (index > size / 2)
						rrb(stack_b);
					else
						rb(stack_b);
				}
			}
		}
		else
		{
			rra(stack_a);
			 down--;
			 size--;
		}
	}
	while (down-- > 0)
		ra(stack_a);
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