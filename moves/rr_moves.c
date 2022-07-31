/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:53:01 by slaajour          #+#    #+#             */
/*   Updated: 2022/07/30 21:28:22 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	last_node(t_list **stack_a)
{
	t_list	*tmp;
	int		tmp2;

	tmp = *stack_a;
	while (tmp->next != NULL && tmp->next->next != NULL)
		tmp = tmp->next;
	tmp2 = tmp->next->data;
	free(tmp->next);
	tmp->next = NULL;
	return (tmp2);
}

void	rra(t_list **stack_a)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp == NULL)
		return ;
	tmp->data = last_node(stack_a);
	tmp->next = *stack_a;
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{	
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp == NULL)
		return ;
	tmp->data = last_node(stack_b);
	tmp->next = *stack_b;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
