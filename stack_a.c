/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:28:48 by slaajour          #+#    #+#             */
/*   Updated: 2022/07/19 15:44:43 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	creat_stack_a(t_list **stack, int i)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	head->data = i;
	head->next = NULL;
	ft_lstadd_back(stack, head);
}

void	ft_lstadd_back(t_list **stack, t_list *new)
{
	if (!*stack)
		*stack = new;
	else
	{
		ft_lstlast(*stack)->next = new;
		new->next = NULL;
	}
}

t_list	*ft_lstlast(t_list *stack)
{
	if (stack)
	{
		while (stack->next)
			stack = stack->next;
	}
	return (stack);
}

void	creat_stack_b(t_list *stack_b, t_list *head)
{
	head = malloc(sizeof(t_list *));
	head->data = '1';
	head->next = NULL;
}
