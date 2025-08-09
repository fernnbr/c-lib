Things to test for isprint:

isprint(int c) returns non-zero if c is a printable character (including space ' ' which is ASCII 32) in the range 32 to 126
Inputs to test: values below, within, and above the printable range; also test negative values and values > 255 (even if invalid)
The original isprint expects int values that are either EOF or represent unsigned char values (0-255)




#include <stdio.h>
#include <ctype.h>
#include "libft.h"  // for ft_isprint prototype

int main(void)
{
    int test_values[] = { -10, 0, 31, 32, 65, 126, 127, 200, 256, EOF };
    int n = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < n; i++)
    {
        int c = test_values[i];
        int orig = isprint(c);
        int ft = ft_isprint(c);

        printf("Input: %4d | isprint: %d | ft_isprint: %d\n", c, orig, ft);
    }

    return 0;
}
