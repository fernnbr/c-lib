#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*mem_alloc;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = nmemb * size;
	if (total / nmemb != size)
		return (NULL);
	mem_alloc = malloc(total);
	if (!mem_alloc)
		return (NULL);
	ft_bzero(mem_alloc, total);
	return (mem_alloc);
}
