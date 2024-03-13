/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstpush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:37:53 by ohassani          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/12 03:39:37 by ohassani         ###   ########.fr       */
=======
/*   Updated: 2024/03/13 01:53:11 by ohassani         ###   ########.fr       */
>>>>>>> c3b56f7 (still one byte not found in memory leaks)
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*createnode(int a)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (node == NULL)
	{
		ft_putstr_fd2("Error\n", 0);
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

void	check(long element, t_node **top, char **tok, int j)
{
	if (element > 2147483647 || checkduplicate(*top, ft_atoi(tok[j])) == 1
		|| !ft_is_string_digit(tok[j]))
		freeallthealloaction(tok, (*top));
}

void	splitingarguments(int ac, char **av, t_node **top, int i)
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

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	int		len;

	if (ac < 2)
		exit(0);
	a = NULL;
	b = NULL;
	errorhandling(ac, av);
	splitingarguments(ac, av, &a, 1);
	len = stacklen(a);
	if (mystackissorted(a) == 1)
	{
		ft_freelist(a);
		exit(0);
	}
	else
		callingfunction(&a, &b, len);
	while (a)
	{
		ft_printf("%d\n", a->val);
		a = a->next;
	}
	ft_freelist(a);
	ft_freelist(b);
}
