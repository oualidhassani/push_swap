#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	if (s1[i] == '+' || s1[i] == '-' || s1[i] == '0')
		i++;
	while ((s2[i] != '\0' && s1[i] != '\0'))
	{
		if (s1[i] != s2[i])
			d = s1[i] - s2[i];
		i++;
	}
	return (d);
}
