#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	c_char;

	if (!s || n == 0)
		return (s);
	dest = (unsigned char *)s;
	c_char = (unsigned char)c;
	while (n--)
		*dest++ = c_char;
	return (s);
}
