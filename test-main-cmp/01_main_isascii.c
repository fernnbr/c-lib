/* Test designed to be comparative with the original function in C (when applicable) */

/* Here what I am testing for */ 
/* If isascii(int c) returns non-zero if c is an ASCII value (0 to 127), 0 otherwise */
/* The inputs: testing values inside and outside the ASCII range (like -1, 0, 65, 127, 128, 200) */
/* The return values from both functions side by side */ 

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    int test_values[] = { -1, 0, 65, 127, 128, 200 };
    int n = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < n; i++)
    {
        int c = test_values[i];
        int orig = isascii(c);
        int ft = ft_isascii(c);

        printf("Input: %3d | isascii: %d | ft_isascii: %d\n", c, orig, ft);
    }

    return 0;
}
