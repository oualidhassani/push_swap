/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:23:48 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/13 15:16:53 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	freeallthealloaction(char **str, t_node *top)
{
	ft_free1(str);
	ft_freelist(top);
	displayerrors();
}

void	errorhandling(int ac, char **av)
{
	spaceerror(ac, av);
	ft_errors(ac, av);
}

void	ss(t_node **top, t_node **topb)
{
	sa(top);
	sb(topb);
}

void	ft_free1(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	errorforchecker(char *str, t_node **a, t_node **b)
{
	free(str);
	ft_freelist((*a));
	ft_freelist((*b));
	displayerrors();
}
