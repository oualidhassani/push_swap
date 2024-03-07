/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:29:44 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/07 19:29:45 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	callingfunction(t_node *a, t_node *b)
{
	if (stacklen(a) == 3)
		sortthreenum(&a);
	else if (stacklen(a) == 2)
		sa(&a);
	else if (stacklen(a) == 4)
		fourthnum(&a, b);
	else if (stacklen(a) == 5)
		fivefunction(&a, b);
	else if (stacklen(a) > 5)
	{
		sortwithindex(&a, &b);
		sortingmorethan100(&a, &b);
	}
}

void	freeallthealloaction(char **str, t_node *stack, char *str1)
{
	ft_free(str);
	ft_freelist((stack));
	free(str1);
	displayerrors();
}
