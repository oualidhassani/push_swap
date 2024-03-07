/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:37:01 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/07 18:37:04 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*findsmallest(t_node *head)
{
	t_node	*minnum;
	t_node	*current;

	minnum = head;
	current = head->next;
	while (current != NULL)
	{
		if (current->val < minnum->val)
			minnum = current;
		current = current->next;
	}
	return (minnum);
}

t_node	*findlargest(t_node *head)
{
	t_node	*maxnum;
	t_node	*current;

	maxnum = head;
	current = head->next;
	while (current != NULL)
	{
		if (current->val > maxnum->val)
			maxnum = current;
		current = current->next;
	}
	return (maxnum);
}

int	mystackissorted(t_node *stack)
{
	if (stack == NULL)
		return (0);
	while (stack->next != NULL)
	{
		if (stack->val > stack->next->val)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	sortthreenum(t_node **a)
{
	t_node	*heighstnode;

	heighstnode = findlargest(*a);
	if ((*a) == heighstnode)
		ra(a);
	else if ((*a)->next == heighstnode)
		rra(a);
	if ((*a)->val > (*a)->next->val)
		sa(a);
}

void	sortingarray(int *arr, int size)
{
	int	i;
	int	tmp;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
