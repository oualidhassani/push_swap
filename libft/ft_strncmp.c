#include "libft.h"

int ft_strncmp(char *s1, char *s2, int n)
{
    int i;
    i = 0;
    while(i < n && !s2[i] && !s1[i] && s1[i] - s2[i])
    {
        if(i == n)
            return(0);
        i++;
    }
    return(s1[i] - s2[i]);
}