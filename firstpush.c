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

void push(stack *s, int data)
{
    node_t *newnode = createnode(data);
    
    newnode->next = s->top;
    
    s->top = newnode;

}

void printstack(stack *s)
{
    node_t *pop = s->top;

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
    if (ac <= 2)
    {
        ft_printf("need more than 1 number\n");
        exit(1);
    }

    stack s;
    s.top = NULL;

    int element;
    while(i < ac)
    {
        element = ft_atoi(av[i]);
        push(&s, element);
        i++;
    }
    printstack(&s);
}