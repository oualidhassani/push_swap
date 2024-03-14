/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:49:59 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/14 01:09:37 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fourthnum(t_node **a, t_node *b)
{
	int	len;

	len = stacklen((*a));
	while (len > 0)
	{
		if ((*a)->val == min((*a)))
		{
			pb(a, &b);
			break ;
		}
		rra(a);
		len--;
	}
	sortthreenum(a);
	pa(a, &b);
}

void	fivefunction(t_node **a, t_node *b)
{
	int	len;

	len = stacklen((*a));
	while (len > 0)
	{
		if ((*a)->val == min((*a)))
		{
			pb(a, &b);
			break ;
		}
		rra(a);
		len--;
	}
	fourthnum(a, b);
	pa(a, &b);
}

void	sortwithindex(t_node **a, t_node **b, int len, int range)
{
	int	*arr;
	int	index_b;
	int	resize;

	arr = ft_copytoarray((*a));
	resize = 15;
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
		else
			ra(a);
	}
	free(arr);
}

void	sortwithindex500(t_node **a, t_node **b, int len, int range)
{
	int	*arr;
	int	index_b;
	int	resize;

	arr = ft_copytoarray((*a));
	resize = 35;
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
		else
			ra(a);
	}
	free(arr);
}

void	sortinthestacka(t_node **a, t_node **b)
{
	int	len;
	int	nasso;
	int	index_b;
	int	n;

	len = stacklen((*b));
	while (len > 0)
	{
		nasso = len / 2;
		n = max(*b);
		index_b = getindexofmax(*b, n);
		if (index_b <= nasso)
		{
			while (index_b-- != 0)
				rb(b);
		}
		else if (index_b > nasso)
		{
			while (index_b++ != len)
				rrb(b);
		}
		pa(a, b);
		len--;
	}
}
