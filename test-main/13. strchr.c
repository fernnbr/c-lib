

//Resilient Code 

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL); // safety check (optional)

	ptr = (char *)s;
	i = 0;
	while (ptr[i] != '\0')
	{
		if ((unsigned char)ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&ptr[i]);
	return (NULL);
}



// Original Code

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *)s;
	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	if (ptr[i] == '\0' && (unsigned char)c == '\0')
		return (&ptr[i]);
	return (0);
}
