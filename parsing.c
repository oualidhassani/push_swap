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

void checkduplicate(int ac, char **av)
{
    int i = 1;
    while(i < ac)
    {
        int j = 2;
            int num = ft_atoi(av[i]);
        while(j < ac)
        {
            int num1 = ft_atoi(av[j]);
            if(num == num1)
                displayerrors();
            j++;
        }
        i++;
    }
}