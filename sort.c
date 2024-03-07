/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:49:59 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/07 18:50:01 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fourthnum(t_node **a, t_node *b)
{
	t_node	*smallest_node;
	t_node	*head;

	smallest_node = findsmallest(*a);
	head = *a;
	if (*a == NULL)
		return ;
	if (head == smallest_node)
	{
		head = head->next;
		pb(a, &b);
		sortthreenum((a));
		pa(a, &b);
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
	pb(a, &b);
	sortthreenum((a));
	pa(a, &b);
}

void	fivefunction(t_node **a, t_node *b)
{
	t_node	*smallest_node;
	t_node	*head;

	smallest_node = findsmallest(*a);
	head = *a;
	if (*a == NULL)
		return ;
	if (head == smallest_node)
	{
		head = head->next;
		pb(a, &b);
		fourthnum(a, b);
		pa(a, &b);
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
	pb(a, &b);
	fourthnum(a, b);
	pa(a, &b);
}

void	sortwithindex(t_node **a, t_node **b)
{
	int	*arr;
	int	range;
	int	index_b;
	int	len;
	int	resize;

	arr = ft_copytoarray((*a));
	range = 0;
	len = stacklen(*a);
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

void	sortingmorethan100(t_node **a, t_node **b)
{
	int	*arr;
	int	range;
	int	index_b;
	int	len;
	int	resize;

	arr = ft_copytoarray((*a));
	range = 0;
	len = stacklen(*a);
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
		else
			ra(a);
	}
	free(arr);
}
