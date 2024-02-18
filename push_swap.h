#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include "./libft/libft.h"

typedef struct node {
    int val;
    struct node *next;
} node_t;

void printstack(node_t *top);
void sa(node_t **top);
int removedbeg(node_t **head);
void sb(node_t **topb);
void ss(node_t **top, node_t **topb);
void pa(node_t **top, node_t **topb);

#endif