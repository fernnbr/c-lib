#include "libft.h"

//Used to identify if a char is printable or not. It uses ASCII table
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
