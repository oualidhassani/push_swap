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
    if((*top) == NULL || (*top)->next == NULL)
        return ;


    node_t *tmp = *top; 
    while(tmp->next != NULL)
        tmp = tmp->next;

    int rmv = removedbeg(top);

    tmp->next = createnode(rmv);
}

void rb(node_t **topb)
{
    if((*topb) == NULL || (*topb)->next == NULL)
        return ;
    
    node_t *tmp = *topb;

    while(tmp->next != NULL)
        tmp = tmp->next;

    int rmv = removedbeg(topb);

    tmp->next = createnode(rmv);

}

void rr(node_t **top, node_t **topb)
{
    ra(top);
    rb(topb);
}

void rra(node_t **top)
{
    if((*top) == NULL || (*top)->next == NULL)
        return ;
    node_t *tmp = *top;

    while(tmp->next->next != NULL)
        tmp = tmp->next;
    
    int value;
    value = tmp->next->val;

    free(tmp->next);
    tmp->next = NULL;

    node_t *newone = createnode(value);

    newone->next = *top;

    *top = newone;
}

void rrb(node_t **topb)
{
    if((*topb) == NULL || (*topb)->next == NULL)
        return ;
    node_t *tmp = *topb;

    while(tmp->next->next != NULL)
        tmp = tmp->next;
    
    int value;
    value = tmp->next->val;

    free(tmp->next);
    tmp->next = NULL;

    node_t *newone = createnode(value);

    newone->next = *topb;

    *topb = newone;
}

void rrr(node_t **top, node_t **topb)
{
    rra(top);
    rrb(topb);
}