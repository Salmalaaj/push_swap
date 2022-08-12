/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 04:13:16 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/12 00:54:51 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b, int ecrire)
{
	t_list	*ptr;

	if (!*stack_b)
		return ;
	ptr = *stack_b;
	*stack_b = ptr->next;
	ptr->next = *stack_a;
	*stack_a = ptr;
	if (ecrire)
		write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b, int ecrire)
{
	t_list	*ptr;

	if (!*stack_a)
		return ;
	ptr = *stack_a;
	*stack_a = ptr->next;
	ptr->next = *stack_b;
	*stack_b = ptr;
	if (ecrire)
		write(1, "pb\n", 3);
}

void	ra(t_list **stack_a, int ecrire)
{	
	t_list	*head;
	t_list	*tmp;

	if (!(*stack_a))
		return ;
	head = *stack_a;
	tmp = head;
	head = head->next;
	tmp->next = NULL;
	*stack_a = head;
	if (head)
	{
		while (head->next)
			head = head->next;
		head->next = tmp;
	}
	if (ecrire)
		write(1, "ra\n", 3);
}

void	rb(t_list **stack_b, int ecrire)
{
	t_list	*head;
	t_list	*tmp;

	if (!(*stack_b))
		return ;
	head = *stack_b;
	tmp = head;
	head = head->next;
	tmp->next = NULL;
	*stack_b = head;
	if (head)
	{
		while (head && head->next)
			head = head->next;
		head->next = tmp;
	}
	if (ecrire)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b, int ecrire)
{
	if (!ft_lstsize(stack_a) || !ft_lstsize(stack_b))
		return ;
	ra(stack_a, 0);
	rb(stack_b, 0);
	if (ecrire)
		write(1, "rr\n", 3);
}
