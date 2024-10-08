/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_moves.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 20:49:02 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/12 00:50:23 by slaajour         ###   ########.fr       */
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
