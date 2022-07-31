/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:50:47 by slaajour          #+#    #+#             */
/*   Updated: 2022/07/30 21:28:19 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **stack_a)
{	
	t_list	*head;
	t_list	*tmp;

	head = *stack_a;
	tmp = head;
	head = head->next;
	tmp->next = NULL;
	*stack_a = head;
	while (head->next)
		head = head->next;
	head->next = tmp;
	write(1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	t_list	*head;
	t_list	*tmp;

	head = *stack_b;
	tmp = head;
	head = head->next;
	tmp->next = NULL;
	*stack_b = head;
	while (head->next)
		head = head->next;
	head->next = tmp;
	write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
