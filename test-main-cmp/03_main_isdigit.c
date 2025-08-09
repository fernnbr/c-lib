#include <stdio.h> 
 #include <ctype.h> */
 #include "libft.h" */

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


/* What I am testing */

Inputs below the ASCII digit range (e.g., -5, 0, 47)
Inputs inside the ASCII digit range (48 to 57, representing '0' to '9')
Inputs above the digit range (e.g., 58, 100, 255)
Confirm that both original isdigit and ft_isdigit return non-zero (true) only for digits, zero otherwise

/* Exepected Output */
/* 0, 0, 0, 1, 1, 1, 0, 0, 0 */

