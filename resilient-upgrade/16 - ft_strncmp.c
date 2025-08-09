#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	const unsigned char	*ptr_s1;
	const unsigned char	*ptr_s2;

	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0);
	ptr_s1 = (const unsigned char *)s1;
	ptr_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && (ptr_s1[i] != '\0' || ptr_s2[i] != '\0'))
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}
