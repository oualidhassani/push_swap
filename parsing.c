#include "push_swap.h"
void displayerrors(void)
{
    ft_putstr_fd("Error\n", 0);
    exit(1);
}

void ft_errors(int ac, char **av)
{
    int i;
    i = 1;
    while (i < ac)
    {
        if(av[i][0] == '\0')
            displayerrors();
        i++;
    }
}

int check_spase(char *str)
{
    int i = 0;

    while (str[i] && str[i] != '\t')
    {
        if (str[i] != ' ')
            return (0);
        i++;
    }
    return (1);
}

int checkduplicate(node_t *a, int nbr)
{
    if(a == NULL)
        return(0);
    while(a)
    {
        if(a->val == nbr)
            return(1);
        a = a->next;
    }
    return(0);
}
void spaceerror(int ac, char **av)
{
    int i = 0;
    while(i < ac)
    {
        if(check_spase(av[i]) == 1)
            displayerrors();
        i++;
    }
}

void errorhandling(int ac, char **av)
{
    spaceerror(ac, av);
    ft_errors(ac, av);
}