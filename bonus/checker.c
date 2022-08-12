/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 02:04:51 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/12 01:17:46 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "get_next_line/get_next_line.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	checker(t_list **stack_a, t_list **stack_b, char *str)
{
	if (!ft_strncmp(str, "sa\n", 3))
		sa(*stack_a, 0);
	else if (!ft_strncmp(str, "sb\n", 3))
		sb(*stack_b, 0);
	else if (!ft_strncmp(str, "ss\n", 3))
		ss(*stack_a, *stack_b, 0);
	else if (!ft_strncmp(str, "ra\n", 3))
		ra(stack_a, 0);
	else if (!ft_strncmp(str, "rb\n", 3))
		rb(stack_b, 0);
	else if (!ft_strncmp(str, "rr\n", 3))
		rr(stack_a, stack_b, 0);
	else if (!ft_strncmp(str, "rra\n", 4))
		rra(stack_a, 0);
	else if (!ft_strncmp(str, "rrb\n", 4))
		rrb(stack_b, 0);
	else if (!ft_strncmp(str, "rrr\n", 4))
		rrr(stack_a, stack_b, 0);
	else if (!ft_strncmp(str, "pa\n", 3))
		pa(stack_a, stack_b, 0);
	else if (!ft_strncmp(str, "pb\n", 3))
		pb(stack_a, stack_b, 0);
	else
		print_error();
}

int	stack_already_sorted(t_list *stack_a)
{
	int	node;

	if (stack_a)
	{
		while (stack_a->next != NULL)
		{
			node = stack_a->data;
			stack_a = stack_a->next;
			if (node > stack_a->data)
				return (0);
		}
		return (1);
	}
	return (1);
}

void	my_checker(t_list **stack_a, t_list **stack_b)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		checker(stack_a, stack_b, str);
		str = get_next_line(0);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	if (argc >= 2)
	{
		check_args(argc, argv);
		i = 1;
		while (i < argc)
		{
			creat_stack_a(&stack_a, ft_atoi(argv[i]));
			i++;
		}
		my_checker(&stack_a, &stack_b);
		if (stack_already_sorted(stack_a) && !stack_b)
			write (1, "OK\n", 3);
		else
			write (1, "KO\n", 3);
	}
	return (0);
}
