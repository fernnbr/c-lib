#include "libft.h"

int	ft_isalnum(int c)
{
	if (c == EOF || c < 0 || c > 255)
		return (0);
	return (ft_isdigit(c) || ft_isalpha(c));
}
