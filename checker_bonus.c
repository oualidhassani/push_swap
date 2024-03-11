/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:47:07 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/10 14:47:08 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int removedbeg(t_node **head)
{
    int removed;
    t_node *tmp;

    removed = (*head)->val;
    tmp = (*head);
    (*head) = (*head)->next;
    free(tmp);
    return (removed);
}
void checker(t_node **a, t_node **b)
{
    char *str;
    str = get_next_line(0);
    while (str)
    {
        if (!ft_strncmp(str, "sa\n", 3))
            sa(a);
        else if (!ft_strncmp(str, "sb\n", 3))
            sb(b);
        else if (!ft_strncmp(str, "ss\n", 3))
            ss(a, b);
        else if (!ft_strncmp(str, "pa\n", 3))
            pa(a, b);
        else if (!ft_strncmp(str, "pb\n", 3))
            pb(a, b);
        else if (!ft_strncmp(str, "ra\n", 3))
            ra(a);
        else if (!ft_strncmp(str, "rb\n", 3))
            rb(b);
        else if (!ft_strncmp(str, "rr\n", 3))
            rr(a, b);
        else if (!ft_strncmp(str, "rra\n", 4))
            rra(a);
        else if (!ft_strncmp(str, "rrb\n", 4))
            rrb(b);
        else if (!ft_strncmp(str, "rrr\n", 4))
            rrr(a, b);
        else 
        {
            ft_putstr_fd("Error\n", 2);
            exit (1);
        }
        free(str);
        str = get_next_line(0);
    }
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
int	stacklen(t_node *head)
{
	t_node	*current;
	int		counter;

	current = head;
	counter = 0;
	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
int main(int ac, char **av)
{
    t_node *a;
    a = NULL;
    t_node *b;
    b = NULL;

    if (ac < 2)
        exit (1);
    errorhandling(ac, av);
    splitingarguments(ac, &a, av, 1);
    checker(&a,&b);
    if(mystackissorted(a) == 1 && b == NULL)
        ft_putstr_fd("OK\n", 1);
    else
        ft_putstr_fd("KO\n", 1);
}
