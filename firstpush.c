#include "push_swap.h"


void ft_free(char **str)
{
    int i = 0;
    while(str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}

node_t *createnode(int a)
{
    node_t * node;
    node  = (node_t *)malloc(sizeof(node_t));

    if(node == NULL)
    {
        ft_printf("fails allocation");
        exit(EXIT_FAILURE);
    }

    node->val = a;
    node->next = NULL;
    return(node);
}
void push(node_t **top, int data)
{
    node_t *newnode = createnode(data);

    node_t *tmp = *top;

      if (tmp == NULL)
      {
        *top = newnode;
        return ;  
      }
    while(tmp->next != NULL)
        tmp = tmp->next;

    tmp->next = newnode;

}

void printstack(node_t *pop)
{
    // if((top) == NULL || (top)->next == NULL)
    //     return ;
    printf("list =>\n\n");
    while(pop)
    {
        ft_printf("%d\n", pop->val);
        pop = pop->next;
    }
}


void splitingarguments(int ac, char **av, node_t **top)
{
    int i;
    i = 1;
    int j;
    int element;
    while (i < ac)
    {
        char *arg = av[i];
        char **tok = ft_split(arg, ' ');
        j = 0;
        if (tok != NULL)
        {
            while (tok[j] != NULL)
            {
                element = ft_atoi(tok[j]);
                char *itoaresult = ft_itoa(element);
                if ( checkduplicate(*top, ft_atoi(tok[j])) == 1 || !ft_is_string_digit(tok[j]) || ft_strcmp(tok[j], itoaresult) != 0)
                {
                    displayerrors();
                    break;
                }
                push(top, element);
                j++;
            }
        }
        ft_free(tok);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac < 2)
        exit(1);
    node_t *a;
    a = NULL;
    node_t *b;
    b = NULL;
    errorhandling(ac, av);
    splitingarguments(ac, av, &a);
    if(mystackissorted(a) == 1)
    {
        ft_freelist(a);
        exit(0);
    }
    else
    {
        if(stacklen(a) == 3)
            sortthreenum(&a);
        else if(stacklen(a) == 2)
            sa(&a);
        else if(stacklen(a) == 4)
            fourthnum(&a, b);
        else if(stacklen(a) == 5)
            fivefunction(&a, b);
        // else if(stacklen(a) < 100)
        // {
        //     sortwithindex(&a, &b);
        //     sortinthestacka(&a, &b);
        // }
        else if(stacklen(a) > 5)
        {
            sortwithindex(&a, &b);
            sortingmorethan100(&a, &b);
        }
    }
    ft_freelist(a);
}
