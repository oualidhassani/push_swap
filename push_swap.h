#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include "./libft/libft.h"

typedef struct node {
    int val;
    int index;
    struct node *next;
} node_t;

void sa(node_t **top);
void sb(node_t **topb);
void ss(node_t **top, node_t **topb);
void pa(node_t **top, node_t **topb);
void pb(node_t **top, node_t **topb);
void ra(node_t **top);
void rra(node_t **top);
void printstack(node_t *pop);
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
void fourthnum(node_t **a, node_t *b);
int asignindices(int content, int *arr, int len);
node_t *findsmallest(node_t *head);
void fivefunction(node_t **a, node_t *b); 
int *ft_copytoarray(node_t *head);
void sortingarray(int *arr, int size);
void spaceerror(int ac, char **av);
void sortwithindex(node_t **a, node_t **b);
void rb(node_t **topb);
void rrb(node_t **topb);
// void sortinthestacka(node_t**a,  node_t**b);
// void sortinthestacka(node_t **a, node_t **b);
int max(node_t *b);
int getindexofmax(node_t *b, int max);
void errorhandling(int ac, char **av);
void sortingmorethan100(node_t **a , node_t**b);
void ft_freelist(node_t *b);
#endif