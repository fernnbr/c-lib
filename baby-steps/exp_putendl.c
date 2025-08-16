// ft_putendl_fd
// Writes a string to the given file descriptor, followed by a newline.
//
// Parameters:
// - s: the string to write (must be NULL-terminated)
// - fd: the file descriptor (1=stdout, 2=stderr, file descriptor, etc.)
//
// Return:
// - None
//
// Notes:
// - Depends on ft_putstr_fd and ft_putchar_fd.
// - If s is NULL, your version will likely segfault unless ft_putstr_fd guards it.
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);    // write the string
	ft_putchar_fd('\n', fd); // append newline
}
