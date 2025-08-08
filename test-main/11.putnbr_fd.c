//1) How the function originally works according to C manual

//ft_putnbr_fd is not a standard C library function but a common utility that 
//outputs the decimal representation of an integer n to a given file descriptor fd. 
//It recursively breaks down the number by dividing by 10 and printing digits from most significant to least significant. 
//It handles negative numbers by printing a leading '-' sign

//2) What its expected return

//Returns nothing (void).
//Side effect: writes the number as characters to the file descriptor fd

//3) Expected input range

//Input integer n: any valid int (including INT_MIN and INT_MAX).
//File descriptor fd: any valid file descriptor ≥ 0

//4) Summary of the behavior of the function

//If n is negative, prints '-' and converts n to positive using a long int to safely handle INT_MIN.
//Recursively prints digits by dividing by 10.
//Prints each digit as a character via ft_putchar_fd

//5) Application examples

//Writing an integer to stdout, stderr, or a file without using printf
//Useful in embedded systems or minimal environments without full stdio
//Logging numerical values to a file or terminal

//6) What I have to handle to comply with the original function

//Handle negative numbers correctly, including INT_MIN overflow
//Recursively print all digits
//Use long int internally to prevent overflow
//Use ft_putchar_fd to output each character
//Handle invalid fd passed to ft_putchar_fd

//7) How to handle possible errors (resilient code)

//Modify ft_putchar_fd to detect invalid fd and report errors
//In ft_putnbr_fd, check if fd is valid before printing.
//Optionally propagate error codes back up recursion (more complex).
//Alternatively, keep void return but silently skip printing on invalid fd

//8) How to handle points on 6) applied to function

//A simple resilient approach:
//Check fd before printing any character; if invalid, return early
//Use the improved ft_putchar_fd that skips invalid fd
//Since ft_putnbr_fd calls ft_putchar_fd multiple times, each will skip invalid writes safely

//9) Important notes about the function

//Uses recursion — be cautious with very large numbers or deep recursion limits.
//Uses long int to handle edge cases like INT_MIN (since -INT_MIN overflows int).
//Does not print anything if fd is invalid (depending on your ft_putchar_fd).
//Not thread-safe if shared file descriptors are used concurrently


//Original Code

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}


//Resilient Code
#include <unistd.h>

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
		return; // Early return if invalid fd

	nbr = n;
	if (nbr < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return;
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}

//Main suggestion 

#include <fcntl.h>
#include <stdio.h>

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
		return;

	nbr = n;
	if (nbr < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return;
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}

int main(void)
{
	int fd;

	// Test to stdout
	ft_putnbr_fd(12345, 1);
	ft_putchar_fd('\n', 1);

	// Test negative number
	ft_putnbr_fd(-9876, 1);
	ft_putchar_fd('\n', 1);

	// Test INT_MIN and INT_MAX
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);

	// Test invalid fd
	ft_putnbr_fd(123, -1); // Should do nothing, no crash

	// Test file output
	fd = open("numbers.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putnbr_fd(2025, fd);
		ft_putchar_fd('\n', fd);
		close(fd);
	}
	else
		perror("open");

	return 0;
}

// Expected results 

//| Test Description      | Input          | Output (stdout/file)        | Comments                      |
//| --------------------- | -------------- | --------------------------- | ----------------------------- |
//| Print positive number | `12345`        | `12345`                     | Normal positive integer       |
//| Print negative number | `-9876`        | `-9876`                     | Negative number with `-` sign |
//| Print INT\_MIN        | `-2147483648`  | `-2147483648`               | Edge case handled correctly   |
//| Print INT\_MAX        | `2147483647`   | `2147483647`                | Largest positive int          |
//| Invalid fd            | `123`, fd = -1 | (no output)                 | Safely ignored, no crash      |
//| Write to file         | `2025`         | file `numbers.txt` content: | Successfully written to file  |
//|                       |                | `2025`                      |                               |

  


