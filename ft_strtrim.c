#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	s2 = (char *)malloc((end - start + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, &s1[start], end - start + 1);
	s2[end - start] = '\0';
	return (s2);
}
