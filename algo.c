#include "push_swap.h"

node_t *findsmallest(node_t *head)
{
    node_t *minnum = head;
    node_t *current = head->next;

    while(current != NULL)
    {
        if (current->val < minnum->val)
            minnum = current;
        current = current->next;
    }
    return minnum;
}


node_t *findlargest(node_t *head)
{
    node_t *maxnum = head;

    node_t *current = head->next;

    while(current != NULL)
    {
        if(current->val > maxnum->val)
            maxnum = current;
        current = current->next;
    }
    return(maxnum);
}

int mystackissorted(node_t *stack)
{
    if(stack == NULL)
        return(0);
    while(stack->next != NULL)
    {
        if(stack->val > stack->next->val)
            return(0);
        stack = stack->next;
    }
    return(1);
}
void sortthreenum(node_t **a)
{
    node_t *heighstnode;

    heighstnode = findlargest(*a);

    if((*a) == heighstnode)
        ra(a);
    else if ((*a)->next == heighstnode)
        rra(a);
    if((*a)->val > (*a)->next->val)
        sa(a);
}

void sortingarray(int *arr, int size)
{
    int i;
    i = 0;
    int tmp;
    while(i < size)
    {
        int j = i + 1;
        while(j < size)
        {
            if(arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
                j++;
        }
        i++;
    }
}
void sortwithindex(node_t **a, node_t**b)
{
    // printstack(*a);
// exit(0);
    int *arr;
    arr = ft_copytoarray((*a));
    int range = 0;
    int index_b;
    int len = stacklen(*a);
    int resize = 15 ;
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
}

void sortinthestacka(node_t **a , node_t**b)
{
    int len = stacklen((*b));
    int i = 0;
    // node_t **current = b;
    int nasso;
    int index_b;
    nasso = len / 2;
    while(i < len)
    {
        int n = max(*b);
        index_b = getindexofmax(*b, n);
        printf("max -----> %d\n", n);
        if(index_b <= nasso)
        {
            // printf("ana dkhlt\n");
            while(index_b != 0)
            {
                rb(b);
                index_b--;
            }    
        }
        else if(index_b > nasso)
        {
            // printf("fhdfhhhfd\n");
            while(index_b != len)
            {
                rrb(b);
                index_b++;
            }
        }
        pa(a, b);
        len--;
        // printf("max----> %d\n", n);
    }
    printstack(*b);
    printstack(*a);
    printf("\n\n");
}