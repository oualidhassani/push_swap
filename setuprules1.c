/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setuprules1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:47:14 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/07 18:47:16 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_node **top, t_node **topb)
{
	rra(top);
	rrb(topb);
	write(1, "rrr\n", 4);
}

void	rr(t_node **top, t_node **topb)
{
	ra(top);
	rb(topb);
	write(1, "rr\n", 3);
}

void	ra(t_node **top)
{
	t_node	*tmp;
	int		rmv;

	if ((*top) == NULL || (*top)->next == NULL)
		return ;
	tmp = *top;
	while (tmp->next != NULL)
		tmp = tmp->next;
	rmv = removedbeg(top);
	tmp->next = createnode(rmv);
	write(1, "ra\n", 3);
}

void	rb(t_node **topb)
{
	t_node	*tmp;
	int		rmv;

	if ((*topb) == NULL || (*topb)->next == NULL)
		return ;
	tmp = *topb;
	while (tmp->next != NULL)
		tmp = tmp->next;
	rmv = removedbeg(topb);
	tmp->next = createnode(rmv);
	write(1, "rb\n", 3);
}

void	rra(t_node **top)
{
	t_node	*tmp;
	int		value;
	t_node	*newone;

	if ((*top) == NULL || (*top)->next == NULL)
		return ;
	tmp = *top;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	value = tmp->next->val;
	free(tmp->next);
	tmp->next = NULL;
	newone = createnode(value);
	newone->next = *top;
	*top = newone;
	write(1, "rra\n", 4);
}
