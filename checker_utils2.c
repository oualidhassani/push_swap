/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:23:48 by ohassani          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/12 03:48:50 by ohassani         ###   ########.fr       */
=======
/*   Updated: 2024/03/13 01:24:46 by ohassani         ###   ########.fr       */
>>>>>>> c3b56f7 (still one byte not found in memory leaks)
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	freeallthealloaction(char **str, t_node *top)
{
	ft_free(str);
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
