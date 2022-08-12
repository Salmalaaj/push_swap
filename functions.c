/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaajour <slaajour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:06:51 by slaajour          #+#    #+#             */
/*   Updated: 2022/08/12 01:09:55 by slaajour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar('-');
		nb = -n;
	}
	if (nb <= 9)
		ft_putchar((nb + 48));
	if (nb > 9)
	{
		ft_putnbr((nb / 10));
		ft_putchar((nb % 10 + 48));
	}
}

void	afficher_stack(t_list **stack, char c)
{
	t_list	*tmp;

	tmp = *stack;
	if (tmp)
	{
		write(1, "\n-------- Stack ", 16);
		write(1, &c, 1);
		write(1, " --------\n", 10);
	}
	while (tmp)
	{
		write(1, "[ ", 2);
		ft_putnbr(tmp->data);
		write(1, " ]", 2);
		tmp = tmp->next;
		if (tmp)
			write(1, "-->", 3);
	}
	write(1, "\n", 1);
}

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
