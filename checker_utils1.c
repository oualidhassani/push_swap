/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:27:55 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/13 15:12:14 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_node	*createnode(int a)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (node == NULL)
	{
		ft_putstr_fd2("Error\n", 2);
		exit(1);
	}
	node->val = a;
	node->next = NULL;
	node->index = 0;
	return (node);
}

void	push(t_node **top, int data)
{
	t_node	*newnode;
	t_node	*tmp;

	newnode = createnode(data);
	tmp = *top;
	if (tmp == NULL)
	{
		*top = newnode;
		return ;
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = newnode;
}

void	splitingarguments(int ac, t_node **top, char **av, int i)
{
	char	**tok;
	char	*arg;
	long	element;
	int		j;

	while (i < ac)
	{
		arg = av[i++];
		tok = ft_split(arg, ' ');
		j = 0;
		if (tok != NULL)
		{
			while (tok[j] != NULL)
			{
				element = ft_atoi(tok[j]);
				check(element, top, tok, j);
				push(top, element);
				j++;
			}
		}
		ft_free1(tok);
	}
}

void	ft_freelist(t_node *stack)
{
	t_node	*next;

	while (stack != NULL)
	{
		next = stack;
		stack = stack->next;
		free(next);
	}
}

void	check(long element, t_node **top, char **tok, int j)
{
	if (element > 2147483647 || checkduplicate(*top, ft_atoi(tok[j])) == 1
		|| !ft_is_string_digit(tok[j]))
		freeallthealloaction(tok, (*top));
}
