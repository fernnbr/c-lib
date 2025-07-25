#include "libft.h"

void	ft_striteri(char *s, void (*f)(int, char*))
{
	int	i;

	if (!s || !f)
		return ();
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
