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
    j = 1;
    while (i < ac)
    {
        if(av[i][0] == '\0')
            displayerrors();
        else if (av[i] == av[j])
            displayerrors();
        i++;
        j++;
    }
}
