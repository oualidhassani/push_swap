/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:30:28 by ohassani          #+#    #+#             */
/*   Updated: 2024/02/16 13:50:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(const void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*s;

	ptr = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			ptr[n - 1] = s[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(ptr, s, n);
	}
	return (ptr);
}
// #include <string.h>
// #include<stdio.h>
// int	main(void)
// {
// 	char	*d = "sert9wd";
// 	char	*s = "sert9wd";

// 	printf("%s", ft_memmove(d, s, 4));
// }
