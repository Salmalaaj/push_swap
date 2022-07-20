/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:02:20 by slaajour          #+#    #+#             */
/*   Updated: 2022/07/19 17:59:43 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swapping(int *first, int *second)
{
	int	tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}

void	sa(t_list *stack_a)
{
	if (stack_a && stack_a->next)
		swapping(&stack_a->data, &stack_a->next->data);
}

void	sb(t_list *stack_b)
{
	if (stack_b && stack_b->next)
		swapping(&stack_b->data, &stack_b->next->data);
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_b;

	first_b = *stack_b;
	if (!stack_b)
		return ;
	else if (stack_a)
		ft_lstadd_front(stack_a, ft_lstnew((stack_b)->data));
	else
		stack_a = ft_lstnew(first_b->data);
	delete_first_b(stack_b);
}

void	delete_first_b(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	*stack = tmp->next;
	tmp->next = NULL;
	free(tmp);
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b, int print)
{
	if (print)
		write(1, "pa\n", 3);
}