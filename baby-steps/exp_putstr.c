// ft_putstr_fd
// Writes a string to the given file descriptor.
//
// Parameters:
// - s: string to write (NULL-safe).
// - fd: file descriptor (1=stdout, 2=stderr, etc.)
//
// Behavior:
// - If s is NULL, nothing happens.
// - Uses write() to output each character.
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return;          // avoids segfault if s == NULL
	while (*s)
		write(fd, s++, 1); // write char by char
}
