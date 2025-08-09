#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		c_char;
	const unsigned char	*s_char;
	size_t				i;

	if (!s || n == 0)
		return (NULL);
	c_char = (unsigned char)c;
	s_char = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_char[i] == c_char)
			return ((void *)&s_char[i]);
		i++;
	}
	return (NULL);
}
