/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:48:11 by ohassani          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/12 03:49:12 by ohassani         ###   ########.fr       */
=======
/*   Updated: 2024/03/13 02:31:40 by ohassani         ###   ########.fr       */
>>>>>>> c3b56f7 (still one byte not found in memory leaks)
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 12
# endif

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node
{
	int			val;
	int			index;
	struct node	*next;
}				t_node;

size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*linesub(char *line_buffer);
char			*mybuffer(int fd, char *accumulation, char *buffer);
char			*get_next_line(int fd);
void			ft_free(char **buffer);
void			errorhandling(int ac, char **av);
void			displayerrors(void);
void			ft_errors(int ac, char **av);
int				check_spase(char *str);
int				checkduplicate(t_node *a, int nbr);
void			spaceerror(int ac, char **av);
void			check(long element, t_node **top, char **tok, int j);
void			splitingarguments(int ac, t_node **top, char **av, int i);
void			freeallthealloaction(char **str, t_node *top);
t_node			*createnode(int a);
void			sa(t_node **top);
void			sb(t_node **topb);
void			pa(t_node **top, t_node **topb);
void			pb(t_node **top, t_node **topb);
void			rrb(t_node **topb);
void			rrr(t_node **top, t_node **topb);
void			rr(t_node **top, t_node **topb);
void			ra(t_node **top);
void			rb(t_node **topb);
void			rra(t_node **top);
void			ss(t_node **top, t_node **topb);
int				removedbeg(t_node **head);
void			ft_freelist(t_node *stack);
void			ss(t_node **top, t_node **topb);
#endif
