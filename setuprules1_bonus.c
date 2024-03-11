/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setuprules1_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:28:37 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/11 20:25:40 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rrr(t_node **top, t_node **topb)
{
	rra(top);
	rrb(topb);
}

void	rr(t_node **top, t_node **topb)
{
	ra(top);
	rb(topb);
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
}
