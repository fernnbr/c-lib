
#include "libft.h"

static size_t	ft_count_digit(long int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;  // for '-' or '0'
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	size_t		i;
	long int	nb;

	nb = n;
	len = ft_count_digit(nb);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = len - 1;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
