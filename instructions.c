/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:30:48 by jubaldo           #+#    #+#             */
/*   Updated: 2023/09/04 22:06:35 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **stack_a)
{
	swap(stack_a);
	ft_putendl_fd("sa", 1);
}

void	sb(t_stack **stack_b)
{
	swap(stack_b);
	ft_putendl_fd("sb", 1);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	ft_putendl_fd("pa", 1);
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_a, stack_b);
	ft_putendl_fd("pb", 1);
}
