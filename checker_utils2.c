/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utis2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:23:48 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/11 20:26:04 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	freeallthealloaction(char **str, t_node *top, char *str1)
{
	ft_free(str);
	free(str1);
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
