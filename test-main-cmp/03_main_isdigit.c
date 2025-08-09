Test inputs include values below '0' (ASCII 48), digits within 48–57, and values outside

#include <stdio.h>
#include <ctype.h>
#include "libft.h"  // for ft_isdigit prototype

int main(void)
{
    int test_values[] = { -5, 0, 47, 48, 50, 57, 58, 100, 255 };
    int n = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < n; i++)
    {
        int c = test_values[i];
        int orig = isdigit(c);
        int ft = ft_isdigit(c);

        printf("Input: %3d | isdigit: %d | ft_isdigit: %d\n", c, orig, ft);
    }

    return 0;
}
