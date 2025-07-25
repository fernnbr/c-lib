#include <unistd.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;
	size_t	total_size;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
