/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:06:51 by slaajour          #+#    #+#             */
/*   Updated: 2022/07/18 14:08:17 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	afficher_stack(t_list *stack, char c)
{
	t_list	*tmp;
	tmp = stack;
	if (tmp)
		printf("\n-------- Stack %c --------\n", c);
	while (tmp)
	{
		printf("[ %d ]", tmp->data);
		tmp = tmp->next;
		if (tmp)
			printf(" --> ");
	}
}
