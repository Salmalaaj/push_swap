#include "push_swap.h"

int     stack_already_sorted(*stack_a)
{
    int node;

    if (stack_a)
    {
        while (stack_a->next != NULL)
        {
            i = stack_a->data;
            stack_a = stack_a->next;
            if (i > stack_a->data)
                return (0);
        }
        return (1);
    }
    return (1);
}

void    start_sorting(t_list **stack_a, t_list **stack_b, int argc)
{
    if (argc == 3)
        sort_two(stack_a);
    else if (argc == 4)
        sort_tree(stack_a);
    else if (argc == 5)
        sort_four(stack_a, stack_b);
    else if (argc == 6)
        sort_five(stack_a, stack_b);
    
    
}

void    find_smallest(t_list **stack_a, t_list **stack_b)
{
    int index;

    index = ft_index(stack_a);
}

int     ft_index(t_list **stack_a)
{
    t_list *tmp;
    int index;
    int info;
    int min;
    int i;

    min = *stack_a->data;
    info = *stack_a->data;
    tmp = *stack_a;
    index = 0;
    i = 0;
    while (tmp->next != NULL)
    {
        info = tmp->next->data;
        tmp = tmp->next;
        i++;
        if (min > info)
        {
            min = info;
            index = i;
        }
        return (index);
    }
}