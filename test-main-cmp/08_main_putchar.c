#include <stdio.h>
#include <unistd.h>
#include "libft.h"  // for ft_putchar_fd prototype

int main(void)
{
    char test_chars[] = { 'A', 'B', 'C', '\n', 'Z' };
    int n = sizeof(test_chars) / sizeof(test_chars[0]);

    printf("Testing ft_putchar_fd output:\n");
    for (int i = 0; i < n; i++)
    {
        ft_putchar_fd(test_chars[i], 1);
    }

    printf("Testing ft_putchar_fd with invalid fd (-1):\n");
    ft_putchar_fd('X', -1);

    return 0;
}


//The Tests

//Writing single characters to a valid file descriptor (usually 1 for stdout)
//Test multiple characters in sequence to see output consistency
//Check behavior when given invalid file descriptors (e.g., negative numbers)


//The Output

//ABC
//Z
//Show nothing or do not crash (I did the protection on mine)
