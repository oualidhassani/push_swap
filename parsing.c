#include "push_swap.h"
void displayerrors(void)
{
    ft_putstr_fd("Error\n", 0);
        exit(EXIT_FAILURE);
}

void ft_errors(int ac, char **av)
{
    int i;
    i = 1;
    int j;
    j = 0 ;
    while (i < ac)
    {
        if(av[i][0] == '\0')
            displayerrors();
        if(ft_strcmp(av[i], av[j]) == 0)
            displayerrors();
        i++;
        j++;
    }
}
