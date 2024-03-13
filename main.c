/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:29:44 by ohassani          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/12 03:39:52 by ohassani         ###   ########.fr       */
=======
/*   Updated: 2024/03/13 01:22:18 by ohassani         ###   ########.fr       */
>>>>>>> c3b56f7 (still one byte not found in memory leaks)
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	callingfunction(t_node **a, t_node **b, int len)
{
	if (len == 3)
		sortthreenum(a);
	else if (len == 2)
		sa(a);
	else if (len == 4)
		fourthnum(a, (*b));
	else if (len == 5)
		fivefunction(a, (*b));
	else if (stacklen((*a)) > 5 && stacklen((*a)) <= 100)
	{
		sortwithindex(a, b, len, 0);
		sortinthestacka(a, b);
	}
	else if (stacklen((*a)) > 100)
	{
		sortwithindex500(a, b, len, 0);
		sortinthestacka(a, b);
	}
}

void	freeallthealloaction(char **str, t_node *stack)
{
	ft_free1(str);
	ft_freelist((stack));
	displayerrors();
}
