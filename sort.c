#include "push_swap.h"
void fourthnum(node_t **a, node_t *b) 
{
    node_t *smallest_node = findsmallest(*a);
    node_t *head = *a;
    if(*a == NULL)
        return ;
    if (head == smallest_node)
    {
        head = head->next; 
        pb(a, &b);    
        sortthreenum((a));
        pa(a, &b);
    }
    else
    {
        if(smallest_node->index < stacklen(head) / 2)
        {
            while(smallest_node->val != (*a)->val)
                ra(a);    
        }
        else
        {
            while(smallest_node->val != (*a)->val)
                rra(a);
        }
    }
    pb(a, &b);    
    sortthreenum((a));
    pa(a, &b);
}


void fivefunction(node_t **a, node_t *b)
{
    node_t *smallest_node = findsmallest(*a);
    node_t *head = *a;
    if(*a == NULL)
        return ;
    if (head == smallest_node)
    {
        head = head->next; 
        pb(a, &b);    
        fourthnum(a, b);
        pa(a, &b);
    }
    else
    {
        if(smallest_node->index < stacklen(head) / 2)
        {
            while(smallest_node->val != (*a)->val)
                ra(a);    
        }
        else
        {
            while(smallest_node->val != (*a)->val)
                rra(a);
        }
    }
    pb(a, &b);    
    fourthnum(a, b);
    pa(a, &b);
}
void sortwithindex(node_t **a, node_t**b)
{
    int *arr;
    arr = ft_copytoarray((*a));
    int range = 0;
    int index_b;
    int len = stacklen(*a);
    int resize = 15;
    while (range < len)
    {
        index_b = asignindices((*a)->val, arr, len);
        if(index_b < range)
        {
            pb(a, b);
            rb(b);
            range++;
        }
        else if(index_b <= resize + range)
        {
            pb(a, b);
            range++;
        }
        else
            ra(a);
    }
    free(arr);
}

void sortingmorethan100(node_t **a , node_t**b)
{
    int *arr;
    arr = ft_copytoarray((*a));
    int range = 0;
    int index_b;
    int len = stacklen(*a);
    int resize = 30 ;
    while (range < len)
    {
        index_b = asignindices((*a)->val, arr, len);
        if(index_b < range)
        {
            pb(a, b);
            rb(b);
            range++;
        }
        else if(index_b <= resize + range)
        {
            pb(a, b);
            range++;
        }
        else
            ra(a);
    }
    free(arr);
}