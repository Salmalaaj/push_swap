/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:44:09 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/12 00:51:41 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_list **stack_a)
{
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa(*stack_a, 1);
}

void	sort_tree(t_list **stack_a)
{
	while (stack_already_sorted(*stack_a) == 0)
	{
		if ((*stack_a)->data < (*stack_a)->next->data
			&& (*stack_a)->next->data > (*stack_a)->next->next->data
			&& (*stack_a)->data > (*stack_a)->next->next->data)
			rra(stack_a, 1);
		else if ((*stack_a)->data > (*stack_a)->next->data
			&& (*stack_a)->data > (*stack_a)->next->next->data
			&& (*stack_a)->next->data < (*stack_a)->next->next->data)
			ra(stack_a, 1);
		else
			sa(*stack_a, 1);
	}
}

void	sort_before_ten(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(stack_a) > 3)
		find_smallest(stack_a, stack_b);
	sort_tree(stack_a);
	while (ft_lstsize(stack_b) > 0)
		pa(stack_a, stack_b, 1);
}

void	transfert(t_list **stack_a, t_interval *interval)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *stack_a;
	while (i < interval->size)
	{
		interval->arr[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	sort_arr(interval, ft_lstsize(stack_a));
}

void	sort_arr(t_interval *interval, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{	
			if (interval->arr[i] > interval->arr[j])
			{
				tmp = interval->arr[i];
				interval->arr[i] = interval->arr[j];
				interval->arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
