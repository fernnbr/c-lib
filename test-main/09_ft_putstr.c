//How the Function Should Behave (based on manual)
//Although there’s no direct standard C function equivalent, ft_putstr_fd mimics:

//Writing a null-terminated string (char *s) to a file descriptor fd using write() repeatedly

//Expected Return

//It returns nothing (void)
//It has a side effect: writes characters to file/terminal/socket specified by fd

//Expected Input Range
//s: a valid pointer to a null-terminated string
//fd: any valid file descriptor (≥ 0)
//If s == NULL, dereferencing will cause a segmentation fault
//If fd < 0, write silently fails (or can be handled)

//Summary of Behavior
//Iterates through string s, character by character
//Writes each character to fd using write(fd, ptr, 1)
//Stops when it hits the null terminator ('\0')

//Checklist for Compliance

//Must:
//Write every char in the string to fd
//Stop at '\0'
//Use write()
//Should ideally:
//Check for NULL string
//Optionally validate fd

// Improved version 

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return;
	while (*s)
		write(fd, s, ft_strlen(s));
}

// Important Notes 

//Important Notes
//Very useful when working without printf (like in mini-shells, file output)
//Common in logging, error messages, debugging
//Does not print newline (\n) — that must be explicit

//Main

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

int main(void)
{
	// Test to stdout
	ft_putstr_fd("Hello, stdout!\n", 1);

	// Test to stderr
	ft_putstr_fd("This is an error.\n", 2);

	// Test to file
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("open");
		return 1;
	}
	ft_putstr_fd("Writing to a file.\n", fd);
	close(fd);

	// Test NULL pointer
	ft_putstr_fd(NULL, 1);  // Should do nothing, no crash

	return 0;
}
