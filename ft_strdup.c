#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;
	size_t	len;

	len = 0;
	while (s1[len] != '\0')
		len++;
	copy = (char *)malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
