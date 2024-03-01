/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:35:02 by ohassani          #+#    #+#             */
/*   Updated: 2024/02/23 12:04:10 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
		if (str[i] == '+' || str [i] == '-' || str[i] == '\0')
			displayerrors();
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = (res * 10) + str[i] - 48;
		i++;
	}
	return (res * sign);
}

// int main ()
// {
//     char d[] ="+123";
//     printf("%d\n", atoi(d));
//     printf("%d", ft_atoi(d));
// }
