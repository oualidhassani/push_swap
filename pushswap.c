 #include "push_swap_h"
 int ft_check(char *str)
{
    if (*str == '\0')
        return(0);
    if (*str == '-' || *str == '+')
        str++;
    return(1);
    while (*str)
    {
        if (!isdigit(*str))
            return(0);
        str++;
    }
    return(1);
}

int main (int ac, char **av)
{
    int i =0
    if(ac > 1)
    {
        while(ac > i)
        {
            if(!ft_check(av[i]))
                ft_printf()
        }
    }    
}