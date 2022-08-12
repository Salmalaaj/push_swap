/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils0.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 04:14:43 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/12 03:33:05 by slaajour         ###   ########.fr       */
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

void	rra(t_list **stack_a, int ecrire)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (!(*stack_a) || tmp == NULL || tmp->next == NULL)
		return ;
	tmp->data = last_node(stack_a);
	tmp->next = *stack_a;
	*stack_a = tmp;
	if (ecrire)
		write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b, int ecrire)
{	
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (!(*stack_b) || tmp == NULL || tmp->next == NULL)
		return ;
	tmp->data = last_node(stack_b);
	tmp->next = *stack_b;
	*stack_b = tmp;
	if (ecrire)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b, int ecrire)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	if (ecrire)
		write(1, "rrr\n", 4);
}
