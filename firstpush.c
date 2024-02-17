#include "push_swap.h"

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

int main(int ac, char **av)
{
    int i = 1;
    if (ac < 2)
    {
        ft_printf("need more than 1 number\n");
        exit(1);
    }

    node_t *top = NULL;

    int element;
    while(i < ac)
    {
        element = ft_atoi(av[i]);
        push(&top, element);
        i++;
    }
    printstack(top);
}