#include "libft.h"

//Used to identify if a char is a digit or not
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
