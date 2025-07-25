#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	isminus;
	int	isdigit;

	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	isminus = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			isminus *= -1;
		i++;
	}
	isdigit = 0;
	while (ft_isdigit(nptr[i]))
	{
		isdigit = isdigit * 10 + (nptr[i] - '0');
		i++;
	}
	return (isdigit * isminus);
}
