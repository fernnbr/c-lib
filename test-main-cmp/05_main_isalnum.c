#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    int test_values[] = { EOF, -10, 0, 47, 48, 57, 58, 64, 65, 90, 91, 96, 97, 122, 123, 200, 255, 256 };
    int n = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < n; i++)
    {
        int c = test_values[i];
        int orig = isalnum(c);
        int ft = ft_isalnum(c);

        printf("Input: %4d | isalnum: %d | ft_isalnum: %d\n", c, orig, ft);
    }

    return 0;
}



//The tests

//Inputs that are digits (ASCII 48–57)
//Inputs that are alphabetic (uppercase 'A'–'Z' and lowercase 'a'–'z')
//Inputs outside alphanumeric ranges (symbols, spaces, control chars)
//Special cases: EOF, negative values, values above 255
//Confirm that both original isalnum and your ft_isalnum return non-zero only for alphanumeric characters, zero otherwise

//Expected Result 
//0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0
