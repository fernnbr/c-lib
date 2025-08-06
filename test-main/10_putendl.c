//How It Should Behave (manual behavior)

//There's no direct equivalent in the C standard library, but ft_putendl_fd is a convenience function that does this:
//Write the string s to the given file descriptor fd, followed by a newline character ('\n')

//Expected Return

//Returns nothing (void)
//Has side effects: outputs to fd

//Expected Input Range

//s: A valid, null-terminated string (char *)
//fd: A valid file descriptor (stdout, stderr, open file, etc.)
//If s == NULL, dereferencing it causes undefined behavior (crash)
//If fd < 0, write() fails silently

//Summary of Behavior

//Prints a string to fd, then a newline
//Works just like puts() from <stdio.h>, but directed to a custom file descriptor

//Checklist to Match the Manual

//Must:
//Use ft_putstr_fd(s, fd)
//Add a newline using ft_putchar_fd('\n', fd)

//Should ideally:
//Handle NULL strings gracefully (e.g., do nothing)
//Optionally validate fd

//Improved version

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

\\Prevents crash on NULL
\\Avoids sending a newline to an invalid file descriptor

//Main

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

int main(void)
{
	// To stdout
	ft_putendl_fd("Line to stdout", 1);

	// To stderr
	ft_putendl_fd("Line to stderr", 2);

	// To file
	int fd = open("log.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("open");
		return 1;
	}
	ft_putendl_fd("Line to file", fd);
	close(fd);

	// NULL string test
	ft_putendl_fd(NULL, 1); // Should do nothing

	return 0;
}


// 

