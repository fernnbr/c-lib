#include "libft.h"

int	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return (-1);
	if (write(fd, &c, 1) != 1)
		return (-1);
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	if (fd < 0)
		return ;

	nbr = n;
	if (nbr < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return ;
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}
