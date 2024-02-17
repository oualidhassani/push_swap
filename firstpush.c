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
        ft_printf("fails allocation\n");
        exit(1);
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

void printstack(node_t *top)
{
    node_t *pop = top;

    while(pop != NULL)
    {
        ft_printf("%d ", pop->val);
        pop = pop->next;
    }
    printf("\n");
}

void splitingarguments(int ac, char **av, node_t **top)
{
    int i = 1;
    int j;
     int element;
    while(i < ac)
    {
        char *arg = av[i];
        char **tok = ft_split(arg, ' ');
            j = 0;
        if(tok != NULL)
        {
            while(tok[j] != NULL)
            {
                element = ft_atoi(tok[j]);
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
    if (ac < 2)
    {
        ft_printf("need more than 1 number\n");
        exit(1);
    }

    node_t *top = NULL;

    splitingarguments(ac, av, &top); 

    printstack(top);
}