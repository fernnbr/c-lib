#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	*ptr;

	ptr = s;
	while (*ptr)
		write(fd, ptr++, 1);
}
