/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 23:03:57 by jubaldo           #+#    #+#             */
/*   Updated: 2023/09/07 17:15:16 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bigcheck(int ac, char ***av)
{
	int	i;

	i = 1;
	if (ac == 2)
	{
		*av = ft_split((*av)[1], ' ');
		if (!(*av))
			return (0);
		i = 0;
	}
	while ((*av)[i])
	{
		if (intmax((*av)[i]) || !checknumber((*av)[i]) || \
			checkdouble((*av), ft_atoi((*av)[i]), i))
		{
			ft_putendl_fd("Error", 2);
			return (0);
		}
		i++;
	}
	return (1);
}
