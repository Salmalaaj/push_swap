/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 04:53:18 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/08 08:36:40 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

typedef struct s_interval
{
	int	max;
	int	centre;
	int	min;
	int	size;
	int	offset;
	int	down;
	int	*arr;
}	t_interval;

		/* CHECKING ARGUMENTS */
void	check_args(int argc, char **argv);
void	digit(char *av);
int		ft_atoi(const char *str);
void	duplicated(int *dup, int num);

		/* LINKED LIST STUFF */
void	creat_stack_a(t_list **stack, int i);
void	ft_lstadd_back(t_list **stack, t_list *new);
t_list	*ft_lstlast(t_list *stack);
int		ft_lstsize(t_list **stack_a);

		/* MOVES */
void	swapping(int *first, int *second);
void	sa(t_list *stack_a);
void	sb(t_list *stack_b);
void	ss(t_list *stack_a, t_list *stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
int		last_node(t_list **stack_a);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

		/* SORTING */
void	start_sorting(t_list **stack_a, t_list **stack_b, int argc);
int		stack_already_sorted(t_list *stack_a);
void	sort_two(t_list **stack_a);
void	sort_tree(t_list **stack_a);
void	sort_before_ten(t_list **stack_a, t_list **stack_b);
void	find_smallest(t_list **stack_a, t_list **stack_b);
int		ft_index(t_list **stack_a);
void	sort_after_ten(t_list **stack_a, t_list **stack_b, int argc);
void	transfert(t_list **stack_a, t_interval *interval);
void	sort_arr(t_interval *interval, int size);
void	make_interval(t_interval *interval, int i);
int		checking_the_size(int argc);
void	remake_inter(t_interval *interval, int argc);
void	initialisation(t_interval *interval, int argc);
void	from_a_to_b(t_list **stack_a, t_list **stack_b, t_interval *interval);
void	send_to_top(t_list **stack_a, int index);
int		index_precise(t_list **stack_a, int nbr);
void	from_b_to_a(t_list **stack_a, t_list **stack_b, t_interval *interval);
int		if_value_exist(t_list **stack_b, int nbr);

		/* RANDOM FUNCTIONS */
void	afficher_stack(t_list **stack, char c);

#endif