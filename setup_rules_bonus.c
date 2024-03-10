#include "checker_bonus.h"

void	sa(t_node **top)
{
	int	tmp;

	if ((*top) == NULL || (*top)->next == NULL)
		return ;
	tmp = (*top)->val;
	(*top)->val = (*top)->next->val;
	(*top)->next->val = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_node **topb)
{
	int	tmpb;

	if ((*topb) == NULL || (*topb)->next == NULL)
		return ;
	tmpb = (*topb)->val;
	(*topb)->val = (*topb)->next->val;
	(*topb)->next->val = tmpb;
	write(1, "sb\n", 3);
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
	write(1, "pa\n", 3);
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
	write(1, "pb\n", 3);
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
	write(1, "rrb\n", 4);
}
