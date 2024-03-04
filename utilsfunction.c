#include "push_swap.h"

int removedbeg(node_t **head)
{

    int removed = (*head)->val;

    node_t *tmp;

    tmp = (*head);

    (*head) = (*head)->next;

    free(tmp);

    // printf("removed------>%d\n", removed);
    return(removed);
}

int stacklen(node_t *head)
{
    node_t *current = head;
    int counter = 0;
    while(current != NULL)
    {
        counter++;
        current = current->next;
    }
    return(counter);
}

int asignindices(int content, int *arr, int len)
{
    int index;
    index = 0;

    while(index < len)
    {
        
       if (arr[index] == content)
       {
            return index;
       }
        index++;
    }
    return(0);
}

int *ft_copytoarray(node_t *head)
{
    node_t *current = head;
    int counter;
    counter = stacklen(head);

    int *array = (int *)malloc(counter * sizeof(int));
    int i = 0;
    if(array == NULL)
        ft_printf("Fails allocation\n");
    
    while(i  < counter)
    {
        array[i] = current->val;
        current = current->next;
        i++;
    }
    i = 0 ;
    sortingarray(array,stacklen(head));
    // while (i < counter)
    // {
    //     printf("%d\n======> %d\n", array[i], i);
    //     i++;
    // }
    return(array);
}