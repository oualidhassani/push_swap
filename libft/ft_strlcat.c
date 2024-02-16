/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:46 by ohassani          #+#    #+#             */
/*   Updated: 2024/01/26 13:28:03 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	res;
	size_t	len;
	size_t	len1;

	j = 0;
	len = ft_strlen(dst);
	len1 = ft_strlen(src);
	if (size > len)
		res = len + len1;
	else
		res = size + len1;
	if (size == 0)
		return (res);
	while (len + j < size - 1 && src[j])
	{
		dst[len + j] = src[j];
		j++;
	}
	dst[len + j] = '\0';
	return (res);
}
