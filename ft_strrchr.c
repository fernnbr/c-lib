#include <unistd.h> 

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;
	char	char_to_find;

	last_occurrence = NULL;
	char_to_find = (char)c;
	while (*s != '\0')
	{
		if (*s == char_to_find)
		{
			last_occurrence = (char *)s;
		}
		s++;
	}
	if (char_to_find == '\0')
	{
		return ((char *)s);
	}
	return (last_occurrence);
}
