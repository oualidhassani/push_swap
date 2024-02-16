/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:37:17 by ohassani          #+#    #+#             */
/*   Updated: 2024/01/26 13:28:56 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*rslt;

	i = 0;
	len = ft_strlen(s);
	rslt = (char *)malloc((len + 1) * sizeof(char));
	if (rslt == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		rslt[i] = f(i, s[i]);
		i++;
	}
	rslt[i] = '\0';
	return (rslt);
}
