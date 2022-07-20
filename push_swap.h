/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 04:53:18 by slaajour          #+#    #+#             */
/*   Updated: 2022/07/19 10:52:30 by slaajour         ###   ########.fr       */
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

		/* CHECKING ARGUMENTS */
void	check_args(int argc, char **argv);
void	digit(char *av);
int		ft_atoi(const char *str);
void	duplicated(int *dup, int num);

		/* LINKED LIST STUFF */
void	creat_stack_a(t_list **stack, int i);
t_list	*creat_stack_b(t_list *head);
void	ft_lstadd_back(t_list **stack, t_list *new);
t_list	*ft_lstlast(t_list *stack);

		/* MOVES */
void	swapping(int *first, int *second);
void	sa(t_list *stack_a);
void	sb(t_list *stack_b);
void	afficher_stack(t_list *stack, char c);

#endif