#include "checker_bonus.h"

void	errorhandling(int ac, char **av)
{
	spaceerror(ac, av);
	ft_errors(ac, av);
}

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
		ft_free(tok);
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
	char	*itoaresult;

	itoaresult = ft_itoa(element);
	if (element > 2147483647 || checkduplicate(*top, ft_atoi(tok[j])) == 1
		|| !ft_is_string_digit(tok[j]) || ft_strcmp(tok[j], itoaresult) != 0)
		freeallthealloaction(tok, (*top), itoaresult);
	free(itoaresult);
}
void	freeallthealloaction(char **str , t_node *top, char *str1)
{
	ft_free(str);
	free(str1);
	ft_freelist(top);
	displayerrors();
}