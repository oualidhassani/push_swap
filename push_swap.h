#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include "./libft/libft.h"

typedef struct node {
    int val;
    struct node *next;
} node_t;

typedef struct stack{
    node_t *top;
}stack;

#endif