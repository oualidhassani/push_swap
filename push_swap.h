#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include "./libft/libft.h"

typedef struct node {
    int val;
    struct node *next;
} node_t;

void sa(node_t **top);
void sb(node_t **topb);
void ss(node_t **top, node_t **topb);
void pa(node_t **top, node_t **topb);
void pb(node_t **top, node_t **topb);
void ra(node_t **top);
void rra(node_t **top);
void printstack(node_t *top);
int removedbeg(node_t **head);
void ft_free(char **str);
node_t *createnode(int a);
void push(node_t **top, int data);
void printstack(node_t *top);
void splitingarguments(int ac, char **av, node_t **top);
void ft_errors(int ac, char**av);
void displayerrors(void);
int check_spase(char *str);
int mystackissorted(node_t *stack);
void sortthreenum(node_t **a);
node_t *findlargest(node_t *head);
int stacklen(node_t *head);
int checkduplicate(node_t *a, int nbr);
void fourthnum(node_t **a);
#endif