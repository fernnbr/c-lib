#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*mem_alloc;

	total = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != 0 && total / nmemb != size)
		return (NULL);
	mem_alloc = (void *)malloc(total);
	if (mem_alloc == NULL)
		return (NULL);
	ft_bzero(mem_alloc, total);
	return (mem_alloc);
}
