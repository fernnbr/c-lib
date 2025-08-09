#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptrdest;
	const unsigned char	*ptrsrc;

	if (!dest && !src)
		return (NULL);
	ptrdest = (unsigned char *)dest;
	ptrsrc = (const unsigned char *)src;
	if (ptrsrc < ptrdest && ptrdest < ptrsrc + n)
	{
		i = n;
		while (i > 0)
		{
			i--;
			ptrdest[i] = ptrsrc[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	return (dest);
}
