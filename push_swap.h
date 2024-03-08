/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:57:49 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/08 13:07:14 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct node
{
	int			val;
	int			index;
	struct node	*next;
}				t_node;

void			fivenumsort(t_node **a, t_node *b);
void			fourthnumsort(t_node **a, t_node *b);
void			sa(t_node **top);
void			sb(t_node **topb);
void			ss(t_node **top, t_node **topb);
void			pa(t_node **top, t_node **topb);
void			pb(t_node **top, t_node **topb);
void			ra(t_node **top);
void			rra(t_node **top);
void			printstack(t_node *pop);
int				removedbeg(t_node **head);
void			ft_free(char **str);
t_node			*createnode(int a);
void			push(t_node **top, int data);
void			printstack(t_node *top);
void			splitingarguments(int ac, char **av, t_node **top, int i);
void			ft_errors(int ac, char **av);
void			displayerrors(void);
int				check_spase(char *str);
int				mystackissorted(t_node *stack);
void			sortthreenum(t_node **a);
t_node			*findlargest(t_node *head);
int				stacklen(t_node *head);
int				checkduplicate(t_node *a, int nbr);
void			fourthnum(t_node **a, t_node *b);
int				asignindices(int content, int *arr, int len);
t_node			*findsmallest(t_node *head);
void			fivefunction(t_node **a, t_node *b);
int				*ft_copytoarray(t_node *head);
void			sortingarray(int *arr, int size);
void			spaceerror(int ac, char **av);
void			sortwithindex(t_node **a, t_node **b, int len);
void			rb(t_node **topb);
void			rrb(t_node **topb);
int				max(t_node *b);
int				getindexofmax(t_node *b, int max);
void			errorhandling(int ac, char **av);
void			sortinthestacka(t_node **a, t_node **b);
void			ft_freelist(t_node *b);
void			callingfunction(t_node **a, t_node **b, int len);
void			freeallthealloaction(char **str, t_node *stack, char *str1);
#endif
