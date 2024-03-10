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
void ss(t_node **top, t_node **topb)
{
	sa(top);
	sb(topb);
}