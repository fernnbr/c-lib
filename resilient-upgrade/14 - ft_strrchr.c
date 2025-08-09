#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_occurrence;
	unsigned char char_to_find;

	if (!s)
		return (NULL);
	last_occurrence = NULL;
	char_to_find = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == char_to_find)
			last_occurrence = s;
		s++;
	}
	if (char_to_find == '\0')
		return ((char *)s);
	return ((char *)last_occurrence);
}

