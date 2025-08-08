#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*ptr_s1 != *ptr_s2 || *ptr_s1 == '\0' || *ptr_s2 == '\0')
			return (*ptr_s1 - *ptr_s2);
		ptr_s1++;
		ptr_s2++;
		n--;
	}
	return (0);
}
