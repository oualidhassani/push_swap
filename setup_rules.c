#include "push_swap.h"

void sa(node_t **top)
{
    if((*top) == NULL || (*top)->next == NULL)
        return ;
    int tmp;

    tmp = (*top)->val;
    (*top)->val = (*top)->next->val;
    (*top)->next->val = tmp;
}