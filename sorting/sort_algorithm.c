/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 03:59:10 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/08 09:47:48 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_after_ten(t_list **stack_a, t_list **stack_b, int argc)
{
	t_interval	interval;
	int			i;
	int			j;
	
	j = 0;
	initialisation(&interval, argc);
	transfert(stack_a, &interval);
	while (j < argc)
	{
		printf("[ %d ]\n", interval.arr[j]);
		j++;
	}
	if (checking_the_size(interval.size) == 0)
		interval.offset = interval.size / 8;
	else
		interval.offset = interval.size / 18;
	i = 1;
	while (ft_lstsize(stack_a))
	{
		make_interval(&interval, i);
		if (interval.max >= interval.size || interval.min < 0)
			remake_inter(&interval, interval.size);
		from_a_to_b(stack_a, stack_b, &interval);
		i++;
	}
	from_b_to_a(stack_a, stack_b, &interval);
	free(interval.arr);
}

void	from_a_to_b(t_list **stack_a, t_list **stack_b, t_interval *interval)
{
	int		index;
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp != NULL)
	{
		if (tmp->data <= interval->arr[interval->max]
			&& tmp->data >= interval->arr[interval->min])
		{
			index = index_precise(stack_a, tmp->data); 
			send_to_top(stack_a, index);
			pb(stack_a, stack_b);
			if ((*stack_b)->data < interval->arr[interval->centre])
				rb(stack_b);
			tmp = *stack_a;
		}
		else
			tmp = tmp->next;
	}
}

int	index_precise(t_list **stack_a, int nbr)
{
	t_list *tmp;
	int		index;
	int		i;

	i = 0;
	index = -1;
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->data == nbr)
		{
			index = i;
			break ;
		}
		tmp = tmp->next;
		i++;
	}
	return (index);
}

void	send_to_top(t_list **stack_a, int index)
{
	int	i;

	i = ft_lstsize(stack_a);
	if (index <= (i - 1) / 2)
	{
		i = 0;
		while (i++ < index)
			ra(stack_a);
	}
	else
	{
		while (i-- > index)
			rra(stack_a);
	}
}
