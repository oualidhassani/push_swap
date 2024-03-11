#include "checker_bonus.h"

void	sa(t_node **top)
{
	int	tmp;

	if ((*top) == NULL || (*top)->next == NULL)
		return ;
	tmp = (*top)->val;
	(*top)->val = (*top)->next->val;
	(*top)->next->val = tmp;
}

void	sb(t_node **topb)
{
	int	tmpb;

	if ((*topb) == NULL || (*topb)->next == NULL)
		return ;
	tmpb = (*topb)->val;
	(*topb)->val = (*topb)->next->val;
	(*topb)->next->val = tmpb;
}

void	pa(t_node **top, t_node **topb)
{
	int		remov;
	t_node	*topnow;

	if ((*topb) == NULL)
		return ;
	if (*topb != NULL)
	{
		remov = removedbeg(topb);
		topnow = createnode(remov);
		topnow->next = *top;
		*top = topnow;
	}
}

void	pb(t_node **top, t_node **topb)
{
	int		remv;
	t_node	*topnnow;

	if ((*top) == NULL)
		return ;
	if (*top != NULL)
	{
		remv = removedbeg(top);
		topnnow = createnode(remv);
		topnnow->next = *topb;
		*topb = topnnow;
	}
}

void	rrb(t_node **topb)
{
	t_node	*tmp;
	int		value;
	t_node	*newone;

	if ((*topb) == NULL || (*topb)->next == NULL)
		return ;
	tmp = *topb;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	value = tmp->next->val;
	free(tmp->next);
	tmp->next = NULL;
	newone = createnode(value);
	newone->next = *topb;
	*topb = newone;
}
