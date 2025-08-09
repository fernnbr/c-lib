#include <stdio.h>
#include <ctype.h>
#include "libft.h"  // for ft_isalpha prototype

int main(void)
{
    int test_values[] = { EOF, -1, 0, 64, 65, 90, 91, 96, 97, 122, 123, 200, 255, 256 };
    int n = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < n; i++)
    {
        int c = test_values[i];
        int orig = isalpha(c);
        int ft = ft_isalpha(c);

        printf("Input: %4d | isalpha: %d | ft_isalpha: %d\n", c, orig, ft);
    }

    return 0;
}


//The Tests 

//Inputs below ASCII range (negative, EOF)
//Characters inside the alphabetic ranges: uppercase 'A'–'Z' (65–90), lowercase 'a'–'z' (97–122)
//Characters just outside these ranges (e.g., 64 '@', 91 '[', 96 '`', 123 '{')
//Non-alphabetic characters like digits, symbols, and values > 255
//Confirm both isalpha and ft_isalpha return non-zero (true) only for alphabetic chars, 0 otherwise

//Expected Output
//0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0
