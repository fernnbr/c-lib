//Original Manual Behavior (Inspired by write)
//There's no direct standard C function named putchar_fd, but your ft_putchar_fd mimics:

//write(fd, &c, 1) — writes one byte (char) to a file descriptor (fd)

//So:/
//ft_putchar_fd writes a single character c to the file or stream specified by file descriptor fd
//It's commonly used to send characters to:
//stdout: fd = 1
//stderr: fd = 2
//a file: fd from open()

//Expected Return

//This function returns nothing (void), but write() internally:
//Returns 1 if success
//Returns -1 if there’s an error (like invalid fd)
//Since you're not handling the return, errors are silently ignored.

//Expected Input Range
//c: any valid char value (0–255)
//fd: an open file descriptor (e.g. from open(), 1 for stdout)
//If fd is invalid (e.g. -1), the call fails silently in your current version

//Summary of Behavior
//Sends exactly 1 character to a file/terminal/socket
//Uses low-level system call (write) from <unistd.h>
//Doesn’t append \0 or newline — writes raw byte only

//What to Handle for Compliance
//Must call write(fd, &c, 1);
//Accept any char c
//Accept any valid file descriptor fd
//Do not crash if fd is invalid (optional)
//Don’t write a newline or \0 — only the raw char

//Safe Code 

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}

//Optionally check if fd is valid

//Notes 

//Notes
//write() is a system call, lower-level than printf
//You must #include <unistd.h> for write()

//File descriptors:
//0 = stdin
//1 = stdout
//2 = stderr

//Main

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	// Test to stdout
	ft_putchar_fd('A', 1); // Expected: prints 'A' on terminal
	ft_putchar_fd('\n', 1);

	// Test to stderr
	ft_putchar_fd('E', 2); // Expected: prints 'E' to error stream
	ft_putchar_fd('\n', 2);

	// Test to file
	int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("open");
		return 1;
	}
	ft_putchar_fd('F', fd); // Expected: writes 'F' to test_output.txt
	ft_putchar_fd('\n', fd);
	close(fd);

	return 0;
}

