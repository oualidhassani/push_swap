#include "push_swap.h"

void sa(node_t **top)
{
    int tmp;

    if((*top) == NULL || (*top)->next == NULL)
        return ;

    tmp = (*top)->val;
    (*top)->val = (*top)->next->val;
    (*top)->next->val = tmp;
}

void sb(node_t **topb)
{
    if((*topb) == NULL || (*topb)->next == NULL)
        return ;
    
    int tmpb;

    tmpb = (*topb)->val;
    (*topb)->val = (*topb)->next->val;
    (*topb)->next->val = tmpb;
}

void ss(node_t **top, node_t **topb)
{
    sa(top);
    sb(topb);
}

void pa(node_t **top, node_t **topb)
{
    if((*topb) == NULL || (*topb)->next == NULL)
        return ;

    int remov = removedbeg(topb);

    
}