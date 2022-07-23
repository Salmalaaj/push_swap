
#include "push_swap.h"

void	swapping(int *first, int *second)
{
	int	tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}

void	sa(t_list *stack_a)
{
	if (stack_a && stack_a->next)
	{
		swapping(&stack_a->data, &stack_a->next->data);
		write(1, "sa\n", 3);
	}
}

void	sb(t_list *stack_b)
{
	if (stack_b && stack_b->next)
	{
		swapping(&stack_b->data, &stack_b->next->data);
		write(1, "sb\n", 1);
	}
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}