#include "push_swap.h"

int removedbeg(node_t **head)
{

    int removed = (*head)->val;

    node_t *tmp;

    tmp = (*head);

    (*head) = (*head)->next;

    free(tmp);

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