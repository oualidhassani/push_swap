/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstpush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:37:53 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/08 13:07:22 by ohassani         ###   ########.fr       */
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

void	check(long element, t_node **top, char **tok, char *itoaresult)
{
	int	j;

	j = 0;
	if (element > 2147483647 || checkduplicate(*top, ft_atoi(tok[j])) == 1
		|| !ft_is_string_digit(tok[j]) || ft_strcmp(tok[j], itoaresult) != 0)
		freeallthealloaction(tok, (*top), itoaresult);
}

void	splitingarguments(int ac, char **av, t_node **top, int i)
{
	char	**tok;
	char	*arg;
	char	*itoaresult;
	long	element;
	int		j;

	while (i < ac)
	{
		arg = av[i++];
		tok = ft_split(arg, ' ');
		if (tok != NULL)
		{
			j = 0;
			while (tok[j] != NULL)
			{
				element = ft_atoi(tok[j]);
				itoaresult = ft_itoa(element);
				check(element, top, tok, itoaresult);
				push(top, element);
				free(itoaresult);
				j++;
			}
		}
		ft_free(tok);
	}
}

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	int		len;

	if (ac < 2)
		exit(1);
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
		callingfunction(&a, &b, len) ft_freelist(a);
	ft_freelist(b);
}
