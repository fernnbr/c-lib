#include <stdio.h>
#include <limits.h>
#include "libft.h"

int main(void)
{
    int test_numbers[] = { 0, 123, -456, INT_MAX, INT_MIN };
    int n = sizeof(test_numbers) / sizeof(test_numbers[0]);

    for (int i = 0; i < n; i++)
    {
        ft_putnbr_fd(test_numbers[i], 1);
        ft_putchar_fd('\n', 1);
    }
    return 0;
}


//The Test
//Calling ft_putnbr_fd with various integers and print the output to stdout (fd = 1)

//The Output
//Numbers printed to stdout (1), one per line
