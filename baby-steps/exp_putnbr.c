// ft_putnbr_fd
// Writes the integer 'n' to the file descriptor 'fd' as a string of digits.
//
// Parameters:
// - n: the integer to write
// - fd: file descriptor to write to (e.g., 1 = stdout, 2 = stderr)
//
// Notes:
// - Handles negative numbers, including the minimum int (-2147483648).
// - Works recursively, printing digits from most significant to least significant.

void	ft_putnbr_fd(int n, int fd)
{
	// Special case: minimum int value (-2^31)
	// Negating it would overflow an int, so we handle it as a string
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}

	// If the number is negative, print '-' and make it positive
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}

	// Recursively print all digits except the last
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);

	// Print the last digit
	ft_putchar_fd((n % 10) + '0', fd);
}
