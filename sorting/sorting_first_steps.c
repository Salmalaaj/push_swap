/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_first_steps.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:55:24 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/08 09:02:30 by slaajour         ###   ########.fr       */
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

void	start_sorting(t_list **stack_a, t_list **stack_b, int argc)
{
	if (argc == 3)
		sort_two(stack_a);
	else if (argc == 4)
		sort_tree(stack_a);
	else if (argc <= 11)
		sort_before_ten(stack_a, stack_b);
	else{
		// printf("argc === %d\n",argc);	
		sort_after_ten(stack_a, stack_b, argc);
	}
}

void	find_smallest(t_list **stack_a, t_list **stack_b)
{
	int	index;
	int	middle;
	int	i;

	index = ft_index(stack_a);
	middle = ft_lstsize(stack_a) / 2;
	if (index <= middle)
	{
		while (index-- > 0)
			ra(stack_a);
		pb(stack_a, stack_b);
	}
	else
	{
		i = 0;
		while (i++ < ft_lstsize(stack_a) - index)
			rra(stack_a);
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
