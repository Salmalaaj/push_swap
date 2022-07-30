#include "push_swap.h"

void    pa(t_list **stack_a, t_list **stack_b)
{
    t_list *ptr;

    if (!*stack_b)
        return ;
    ptr = *stack_b;
    *stack_b = ptr->next;
    ptr->next = *stack_a;
    *stack_a = ptr;
    write(1, "pa\n", 3);
}

void    pb(t_list **stack_a, t_list **stack_b)
{
    t_list *ptr;

    if (!*stack_a)
        return ;
    ptr = *stack_a;
    *stack_a = ptr->next;
    ptr->next = *stack_b;
    *stack_b = ptr;
    write(1, "pb\n", 3);
}