/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_stuff.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:01:19 by slaajour          #+#    #+#             */
/*   Updated: 2022/07/30 21:27:32 by slaajour         ###   ########.fr       */
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

int	ft_lstsize(t_list **stack_a)
{
	t_list	*tmp;
	int		size;

	tmp = *stack_a;
	size = 0;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
