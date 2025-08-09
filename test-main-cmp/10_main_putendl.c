#include <stdio.h>
#include <unistd.h>
#include "libft.h"
int main(void)
{
    char *test_strings[] = {
        "Hello, World!",
        "",
        NULL,
        "Last line test"
    };
    int n = sizeof(test_strings) / sizeof(test_strings[0]);

    printf("Testing ft_putendl_fd output:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Test %d: ", i + 1);
        ft_putendl_fd(test_strings[i], 1);
    }

    printf("Testing ft_putendl_fd with invalid fd (-1):\n");
    ft_putendl_fd("This should NOT appear\n", -1);

    return 0;
}


//The Tests 

//Write a normal string followed by a newline to a valid file descriptor (usually 1 for stdout)
//Empty string should print only a newline
//Null pointer should safely return without printing anything
//Invalid file descriptor (negative fd) should safely return without printing

//The Output

//prints the string followed by newline
//prints only a newline (empty string)
//prints nothing
//prints the string followed by newline
//prints nothing
