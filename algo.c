#include "push_swap.h"

node_t *findsmallest(node_t *head)
{
    node_t *minnum = head;

    node_t *current = head->next;

    while(current != NULL)
    {
        if(current->val < minnum->val)
            minnum = current;
        current = current->next;
    }
    return(minnum);
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
// void fourthnum(node_t **a) 
// {
//     node_t *smallest_node = findsmallest(*a);
//     node_t *b = NULL;
//     node_t *head = *a;

//     while(head != NULL)
//     {
//         if(head == smallest_node)

//     }
// }


