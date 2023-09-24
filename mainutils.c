/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:04:01 by jubaldo           #+#    #+#             */
/*   Updated: 2023/09/07 17:42:07 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	argvsize(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		return (0);
	while (av[i] != 0)
		i++;
	return (i);
}

void	fill_stack(t_stack **stack_a, int ac, char **av)
{
	t_stack	*new;
	int		i;

	i = 1;
	if (ac == 2)
		i = 0;
	while (av[i])
	{
		new = ft_newlst(ft_atoi(av[i]));
		if (!new)
			return ;
		ft_addfrontlst(stack_a, new);
		i++;
	}
	i = 0;
	while (i < (int []){ac - 1, argvsize(ac, av)}[(ac == 2)])
	{
		new = gnm(stack_a);
		new->i = i++;
	}
}
