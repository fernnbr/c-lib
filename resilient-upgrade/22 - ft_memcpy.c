#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	const unsigned char	*ptrsrc;

	if (!dest && !src)
		return (NULL);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (const unsigned char *)src;
	while (n--)
		*ptrdest++ = *ptrsrc++;
	return (dest);
}
