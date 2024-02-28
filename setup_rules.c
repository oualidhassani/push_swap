#include "push_swap.h"

void sa(node_t **top)
{
    write(1, "sa\n", 3);
    int tmp;

    if((*top) == NULL)
        return ;

    tmp = (*top)->val;
    (*top)->val = (*top)->next->val;
    (*top)->next->val = tmp;
}

void sb(node_t **topb)
{
        write(1, "sb\n", 3);

    if((*topb) == NULL)
        return ;
    
    int tmpb;

    tmpb = (*topb)->val;
    (*topb)->val = (*topb)->next->val;
    (*topb)->next->val = tmpb;
}

void pa(node_t **top, node_t **topb)
{
        write(1, "pa\n", 3);

    if((*topb) == NULL)
        return ;

    int remov = removedbeg(topb);
    node_t *topnow = createnode(remov);

    topnow->next = *top;
    *top = topnow;
}

void pb(node_t **top, node_t **topb)
{
        write(1, "pb\n", 3);

     if((*top) == NULL)
        return ;

    int remv = removedbeg(top);

    node_t *topnnow = createnode(remv);

    topnnow->next = *topb; 
    *topb = topnnow;

}

void ra(node_t **top)
{
        write(1, "ra\n", 3);

    if((*top) == NULL)
        return ;


    node_t *tmp = *top; 
    while(tmp->next != NULL)
        tmp = tmp->next;

    int rmv = removedbeg(top);

    tmp->next = createnode(rmv);
}

void rb(node_t **topb)
{
        write(1, "rb\n", 3);

    if((*topb) == NULL)
        return ;
    
    node_t *tmp = *topb;

    while(tmp->next != NULL)
        tmp = tmp->next;

    int rmv = removedbeg(topb);

    tmp->next = createnode(rmv);

}

void rr(node_t **top, node_t **topb)
{
        write(1, "rr\n", 3);

    ra(top);
    rb(topb);
}

void rra(node_t **top)
{
        write(1, "rra\n", 4);
    if((*top) == NULL)
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
        write(1, "rrb\n", 4);

    if((*topb) == NULL)
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
        write(1, "rrr\n", 4);

    rra(top);
    rrb(topb);
}