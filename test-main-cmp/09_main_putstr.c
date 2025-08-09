#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int main(void)
{
    char *test_strings[] = {
        "Hello, World!\n",
        "",
        NULL,
        "Another test line.\n"
    };
    int n = sizeof(test_strings) / sizeof(test_strings[0]);

    printf("Testing ft_putstr_fd output:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Test %d: ", i + 1);
        if (test_strings[i] != NULL)
            ft_putstr_fd(test_strings[i], 1);
        else
            ft_putstr_fd(test_strings[i], 1);
    }

    printf("Testing ft_putstr_fd with invalid fd (-1):\n");
    ft_putstr_fd("This should NOT appear\n", -1);

    return 0;
}



//The Tests

//Writing normal strings to valid file descriptors (e.g., stdout, fd=1)
//Empty strings (should produce no output)
//Null pointer (should safely return without crashing)
//Invalid file descriptor (negative fd, should safely return)

//The Output 

//The string with newline
//prints nothing
//nothing printed, no crash
//prints another line
//prints nothing
