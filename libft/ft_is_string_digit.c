/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_string_digit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohassani <ohassani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:02:27 by ohassani          #+#    #+#             */
/*   Updated: 2024/03/07 12:26:31 by ohassani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_string_digit(char *str)
{
	int	i;
	int j = 0;
	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++; 
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
		j++;
	}
	return (1);
}
