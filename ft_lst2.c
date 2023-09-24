/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:17:46 by jubaldo           #+#    #+#             */
/*   Updated: 2023/09/09 10:49:30 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_addbacklst(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (new)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		last = ft_lastlst(*lst);
		last->n = new;
	}
}

void	ft_clearlst(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*lst;

	lst = *stack;
	while (lst != 0)
	{
		tmp = lst->n;
		free(lst);
		lst = tmp;
	}
}

void	ft_addfrontlst(t_stack **lst, t_stack *new)
{
	new->n = (*lst);
	(*lst) = new;
}
