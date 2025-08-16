// ft_putchar_fd
// Writes a single character to the given file descriptor.
//
// Parameters:
// - c: the character to write
// - fd: the file descriptor to write to
//
// Return:
// - None
//
// Notes:
// - fd = 1 → stdout (terminal)
// - fd = 2 → stderr
// - fd = open file descriptor → writes into a file

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
