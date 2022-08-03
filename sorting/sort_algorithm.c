/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 03:59:10 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/03 05:02:05 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	after_six(t_list **stack_a, int *arr)
{
	algo(stack_a, arr, 2);
}

void	algo(t_list **stack_a, int *arr, int nbr)
{
	int			size;
	t_interval	*interval;
	int			i;

	i = 0;
	size = ft_lstsize(stack_a) / 2;
	interval = malloc(sizeof(t_interval));
	arr = malloc(size * sizeof(int));
	transfert(stack_a, arr);
	while (i < ft_lstsize(stack_a))
	{
		printf("%d\n", arr[i]);
		i++;
	}
	interval->center1 = arr[size];
//	printf("%d\n", interval->center1);
	while (size != '\0')
	{
		make_interval(stack_a, arr, interval, nbr);
		if (nbr >= size)
		{
			
		}
	}
}

void	transfert(t_list **stack_a, int *arr)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *stack_a;
	while (tmp)
	{
		arr[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	sort_arr(arr, ft_lstsize(stack_a));
}

void	sort_arr(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	make_interval(t_list **stack_a, int *arr, t_interval *interv, int nbr)
{
	int	size;

	size = ft_lstsize(stack_a) / 2;
	interv->center2 = size;
	printf("%d\n", interv->center2);
	interv->first = arr[interv->center2 - nbr];
	printf("%d\n", interv->first);
	interv->last = arr[interv->center2 + nbr];
	printf("%d\n", interv->last);
}
