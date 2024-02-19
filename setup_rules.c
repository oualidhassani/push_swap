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

}

void pa(node_t **top, node_t **topb)
{
    if((*topb) == NULL || (*topb)->next == NULL)
        return ;

    int remov = removedbeg(topb);
    node_t *topnow = createnode(remov);

    topnow->next = *top;
    *top = topnow;
}

void pb(node_t **top, node_t **topb)
{
     if((*top) == NULL || (*top)->next == NULL)
        return ;

    int remv = removedbeg(top);

    node_t *topnnow = createnode(remv);

    topnnow->next = *topb; 
    *topb = topnnow;

}

void ra(node_t **top)
{
    
}