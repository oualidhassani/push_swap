#ifndef PUSH_SWAP_BONUS_H
#define PUSH_SWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 12
# endif

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*linesub(char *line_buffer);
char	*mybuffer(int fd, char *accumulation, char *buffer);
char	*get_next_line(int fd);
void	ft_free(char **buffer);

#endif