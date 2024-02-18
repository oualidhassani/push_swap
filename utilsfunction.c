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