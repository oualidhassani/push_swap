/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsfunction.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:50:46 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/07 18:50:49 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	removedbeg(t_node **head)
{
	int		removed;
	t_node	*tmp;

	removed = (*head)->val;
	tmp = (*head);
	(*head) = (*head)->next;
	free(tmp);
	return (removed);
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

int	asignindices(int content, int *arr, int len)
{
	int	index;

	index = 0;
	while (index < len)
	{
		if (arr[index] == content)
		{
			return (index);
		}
		index++;
	}
	return (0);
}

int	*ft_copytoarray(t_node *head)
{
	t_node	*current;
	int		counter;
	int		*array;
	int		i;

	current = head;
	counter = stacklen(head);
	array = (int *)malloc(counter * sizeof(int));
	i = 0;
	if (array == NULL)
	{
		ft_putstr_fd2("Error", 0);
		exit(1);
	}
	while (i < counter)
	{
		array[i] = current->val;
		current = current->next;
		i++;
	}
	i = 0;
	sortingarray(array, stacklen(head));
	return (array);
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
