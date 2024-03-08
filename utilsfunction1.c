/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsfunction1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:52:24 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/07 18:52:26 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max(t_node *b)
{
	t_node	*current;
	int		maxnum;

	current = b;
	maxnum = current->val;
	while (current != NULL)
	{
		if (maxnum < current->val)
			maxnum = current->val;
		current = current->next;
	}
	return (maxnum);
}

int	getindexofmax(t_node *b, int max)
{
	int		i;
	t_node	*current;

	i = 0;
	current = b;
	while (current != NULL)
	{
		if (current->val == max)
			return (i);
		current = current->next;
		i++;
	}
	return (-1);
}

void	fourthnumsort(t_node **a, t_node *b)
{
	pb(a, &b);
	sortthreenum((a));
	pa(a, &b);
}

void	fivenumsort(t_node **a, t_node *b)
{
	pb(a, &b);
	fourthnum(a, b);
	pa(a, &b);
}

void	ft_free(char **str)
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
