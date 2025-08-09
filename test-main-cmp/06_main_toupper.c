#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    int test_values[] = { 'a', 'm', 'z', 'A', 'M', 'Z', '0', '9', '!', EOF, 128 };
    int n = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < n; i++)
    {
        int c = test_values[i];
        int orig = toupper(c);
        int ft = ft_toupper(c);

        printf("Input: %4d ('%c') | toupper: %4d ('%c') | ft_toupper: %4d ('%c')\n",
               c, (c >= 32 && c <= 126) ? c : '?',
               orig, (orig >= 32 && orig <= 126) ? orig : '?',
               ft, (ft >= 32 && ft <= 126) ? ft : '?');
    }

    return 0;
}


//The Tests

//Lowercase letters (ASCII 97–122) should convert to uppercase (65–90)
//Uppercase letters should stay the same
//Non-alphabetic characters (digits, symbols, control chars) should stay unchanged
//Test edge cases like 'a', 'z', 'A', 'Z', symbols, numbers, and values outside ASCII range

//The Output

//'a'(97) -> 'A'(65), 'm'(109) -> 'M'(77), 'z'(122) -> 'Z'(90),
//'A'(65) -> 'A'(65), 'M'(77) -> 'M'(77), 'Z'(90) -> 'Z'(90),
//'0'(48) -> '0'(48), '9'(57) -> '9'(57), '!'(33) -> '!'(33),
//EOF(-1) -> EOF(-1), 128 -> 128


