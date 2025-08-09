#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	c_char;
	size_t			i;

	dest = (unsigned char *)s;
	c_char = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dest[i] = c_char;
		i++;
	}
	return (s);
}
