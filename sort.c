/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:49:59 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/08 13:00:03 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fourthnum(t_node **a, t_node *b)
{
	t_node	*smallest_node;
	t_node	*head;

	smallest_node = findsmallest(*a);
	head = *a;
	if (head == smallest_node)
	{
		head = head->next;
		fourthnumsort(a, b);
	}
	else
	{
		if (smallest_node->index < stacklen(head) / 2)
		{
			while (smallest_node->val != (*a)->val)
				ra(a);
		}
		else
		{
			while (smallest_node->val != (*a)->val)
				rra(a);
		}
	}
	fourthnumsort(a, b);
}

void	fivefunction(t_node **a, t_node *b)
{
	t_node	*smallest_node;
	t_node	*head;

	smallest_node = findsmallest(*a);
	head = *a;
	if (head == smallest_node)
	{
		head = head->next;
		fivenumsort(a, b);
	}
	else
	{
		if (smallest_node->index < stacklen(head) / 2)
		{
			while (smallest_node->val != (*a)->val)
				ra(a);
		}
		else
		{
			while (smallest_node->val != (*a)->val)
				rra(a);
		}
	}
	fivenumsort(a, b);
}

void	sortwithindex(t_node **a, t_node **b, int len)
{
	int	*arr;
	int	range;
	int	index_b;
	int	resize;

	arr = ft_copytoarray((*a));
	range = 0;
	resize = 30;
	while (range < len)
	{
		index_b = asignindices((*a)->val, arr, len);
		if (index_b < range)
		{
			pb(a, b);
			rb(b);
			range++;
		}
		else if (index_b <= resize + range)
		{
			pb(a, b);
			range++;
		}
		ra(a);
	}
	free(arr);
}

void	sortinthestacka(t_node **a, t_node **b)
{
	int	len;
	int	i;
	int	nasso;
	int	index_b;
	int	n;

	len = stacklen((*b));
	i = 0;
	nasso = len / 2;
	while (i < len)
	{
		n = max(*b);
		index_b = getindexofmax(*b, n);
		if (index_b <= nasso)
		{
			while (index_b != 0)
			{
				rb(b);
				index_b--;
			}
		}
		else if (index_b > nasso)
		{
			while (index_b != len)
			{
				rrb(b);
				index_b++;
			}
		}
		pa(a, b);
		len--;
	}
}
