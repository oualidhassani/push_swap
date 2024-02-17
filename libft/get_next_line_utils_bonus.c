/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:59:22 by ohassani          #+#    #+#             */
/*   Updated: 2023/12/12 10:04:49 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen1(const char *s)
{
	size_t	c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strchr1(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strdup1(const char *s)
{
	size_t	i;
	size_t	len;
	char	*copie;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	copie = (char *)malloc((len + 1) * sizeof(char));
	if (copie == NULL)
		return (NULL);
	while (len > i)
	{
		copie[i] = s[i];
		i++;
	}
	copie[i] = '\0';
	return (copie);
}

char	*ft_substr1(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (len > i)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin1(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	size_t	j;
	char	*concatenated;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	concatenated = (char *)malloc((len1 + len2) * sizeof(char) + 1);
	if (concatenated == NULL)
		return (NULL);
	while (len1 > i)
	{
		concatenated[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		concatenated[i++] = s2[j++];
	concatenated[len1 + len2] = '\0';
	return (concatenated);
}
