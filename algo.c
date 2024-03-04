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
    int *arr;
    arr = ft_copytoarray((*a));
    int range = 0;
    int index_b;
    int len = stacklen(*a);
    int resize = range + 5;
    while (range < stacklen(*a))
    {
        index_b = asignindices((*a)->val, arr, len);
        // printf("index ->> %d\n",index_b);
        if(index_b <= range)
        {
            pb(a, b);
            rb(b);
            range++;
        }
        if(index_b <= resize)
        {
            pb(a, b);
            range++;
        }
        else
            ra(a);
    }
  
    printstack(*a);
    printf("\n------\n");
    printstack(*b);
}