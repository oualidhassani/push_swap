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

void printstack(node_t *top)
{
    if((top) == NULL || (top)->next == NULL)
        return ;
    node_t *pop = top;

    while(pop != NULL)
    {
        ft_printf("%d\n", pop->val);
        pop = pop->next;
    }
}

void splitingarguments(int ac, char **av, node_t **top)
{
    int i = 1;
    int j;
    int  element;
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
                char *itoaresult = ft_itoa(element);
                if(!ft_is_string_digit(tok[j])||ft_strcmp(tok[j], itoaresult) != 0 || (checkduplicate(*top, ft_atoi(tok[j]))) == 1)
                    displayerrors();
                push(top, element);
                j++;
            }
        }
        ft_free(tok);
        i++;
    }
}

// int main(int ac, char **av)
// {
//     if (ac < 2)
//         exit(1);
//     (void)av;

//     node_t *top = NULL;
// //    node_t *topb = NULL;
//     splitingarguments(ac, av, &top);
//     printstack(top);
//     // printf("%d",topb->val);
//     // sa(&top);
//     // push(&top, 10);
//     // push(&top, 20);
//     // push(&top, 30);
//     // push(&top, 40);
//     // push(&top, 50);
//     // rra(&top);
//     // push(&topb, 60);
//     // push(&topb, 70);
//     // push(&topb, 80);

//     // pa(&top, &topb);
//     // printstack(top);
//     // printf("\nB => \n\n");
//     // printstack(topb);

//     // printf("\n B after push => \n\n");
//     // printstack(topb);
//     // printf("\n A after push=> \n\n");
//     // printstack(top);


// }

int main(int ac, char **av)
{
    int i = 1; 
    if(ac < 2)
        exit(1);
    node_t *a;
    a = NULL;
    while(i < ac)
    {
        if (check_spase(av[i]) == 1)
            displayerrors();
        i++;
    }
    ft_errors(ac, av);
    splitingarguments(ac, av, &a);
    if(mystackissorted(a) == 0)
    {
        if(stacklen(a) == 3)
            sortthreenum(&a);
        else if(stacklen(a) == 2)
            sa(&a);
    }
}
