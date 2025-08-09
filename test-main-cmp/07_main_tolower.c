#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    int test_values[] = { EOF, -5, 0, 64, 65, 90, 91, 97, 122, 123, 200, 255, 256 };
    int n = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < n; i++)
    {
        int c = test_values[i];
        int orig = tolower(c);
        int ft = ft_tolower(c);

        printf("Input: %4d ('%c') | tolower: %4d ('%c') | ft_tolower: %4d ('%c')\n",
               c, (c >= 32 && c <= 126) ? c : '?',
               orig, (orig >= 32 && orig <= 126) ? orig : '?',
               ft, (ft >= 32 && ft <= 126) ? ft : '?');
    }

    return 0;
}

//The Tests

//Uppercase letters (ASCII 65–90) should convert to lowercase (97–122)
//Lowercase letters should stay unchanged
//Non-alphabetic characters (digits, symbols, control chars) should stay unchanged
//Edge cases: EOF, negative values, values > 255
//Confirm both original tolower and ft_tolower return same results

//The Output

//EOF(-1) -> -1 (?), -5 -> -5 (?), 0 -> 0 (?), 64('@') -> 64('@'),
//65('A') -> 97('a'), 90('Z') -> 122('z'), 91('[') -> 91('['),
//97('a') -> 97('a'), 122('z') -> 122('z'), 123('{') -> 123('{'),
//200 -> 200 (?), 255 -> 255 (?), 256 -> 256 (?)
