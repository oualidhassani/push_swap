#include "push_swap.h"

void creation(stack *stack, int val)
{
    node_t *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->val = val;

    newnode->next = NULL;
}
void push(stack *stack)
{
    
}

// int pop(stack *stack)
// {
//     if(stack == NULL)
//         printf("empty stack \n");
//         return(1);

    
// }
void print(stack *stack)
{
    node_t* current = stack->top;

    while(current != NULL)
    {
        printf("%d\n", current->val);
            current = current->next;
    }
}
int main()
{
    stack stack;
    stack.top = NULL;
    pushstack(&stack, 3);
    
    pushstack(&stack, 2);
    pushstack(&stack, 1);
    print(&stack);
}