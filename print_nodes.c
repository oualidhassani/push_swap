#include "push_swap.h"

void print(node_t *head)
{
    
    // node_t* current = head;

    while(head != NULL)
    {
        ft_printf("%d\n", head->val);
        head = head->next;
    }
}


int main(int ac, char **av)
{
    (void)av;
    (void)ac;
    node_t *node1;
    node_t *node2;
    node1 = (node_t *)malloc(sizeof(node_t));
    node2 = (node_t *)malloc(sizeof(node_t));
    node1->val = 5;
    node2->val = 6;
    
    node1->next = node2;
    node2->next = NULL;
    printf("before %p\n",node1);
    print(node1);
    printf("after %p\n",node1);
}