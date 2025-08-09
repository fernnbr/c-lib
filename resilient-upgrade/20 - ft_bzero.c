#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	if (!s || n == 0)
		return ;
	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}
