/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_first_steps.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:55:24 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/03 04:11:04 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_already_sorted(t_list *stack_a)
{
	int	node;

	if (stack_a)
	{
		while (stack_a->next != NULL)
		{
			node = stack_a->data;
			stack_a = stack_a->next;
			if (node > stack_a->data)
				return (0);
		}
		return (1);
	}
	return (1);
}

void	start_sorting(t_list **stack_a, t_list **stack_b, int argc, int *arr)
{
	if (argc == 3)
		sort_two(stack_a);
	else if (argc == 4)
		sort_tree(stack_a);
	else if (argc == 5)
		sort_four(stack_a, stack_b);
	else if (argc == 6)
		sort_five(stack_a, stack_b);
	else if (argc >= 7)
		after_six(stack_a, arr);
}

void	find_smallest(t_list **stack_a, t_list **stack_b)
{
	int	index;
	int	middle;
	int	i;

	index = ft_index(stack_a);
	middle = ft_lstsize(stack_a) / 2;
	i = ft_lstsize(stack_a) - index;
	if (index < middle)
	{
		while (i)
		{
			rra(stack_a);
			i--;
		}
		pb(stack_a, stack_b);
	}
	else
	{
		i = middle;
		while (i)
		{
			ra(stack_a);
			i--;
		}
		pb(stack_a, stack_b);
	}
}

int	ft_index(t_list **stack_a)
{
	t_list	*tmp;
	int		index;
	int		info;
	int		min;
	int		i;

	min = (*stack_a)->data;
	info = (*stack_a)->data;
	tmp = (*stack_a);
	index = 0;
	i = 0;
	while (tmp->next != NULL)
	{
		info = tmp->next->data;
		tmp = tmp->next;
		i++;
		if (min > info)
		{
			min = info;
			index = i;
		}
	}
	return (index);
}
