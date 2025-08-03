//The Original Function isalpha

//Returns non-zero (true) if c is an alphabetic letter, i.e., one of:
//'A' through 'Z' (ASCII 65 to 90), or
//'a' through 'z' (ASCII 97 to 122).
//Returns 0 (false) otherwise.
//The argument c must be representable as an unsigned char or be equal to EOF.
//Behavior is undefined if c is outside the range of unsigned char and not EOF

//Edge Cases to Comply

// 1.Input range validation:
//Accept only values of c in 0 to 255 (unsigned char range), or EOF.
//For other values, behavior is undefined, so to be safe, return 0.

//2. EOF handling:
//If c == EOF, return 0.
//Character range:
//Only ASCII letters [A-Z] and [a-z] return true (1)

//The Resilient Code with tests 

int ft_isalpha(int c)
{
    // Handle EOF and out-of-range inputs safely
    if (c == EOF)
        return 0;
    if (c < 0 || c > 255)
        return 0;

    // Cast to unsigned char for safety
    c = (unsigned char)c;

    // Check ASCII alphabetic ranges
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;

    return 0;
}

//Main for Resilient Code 

#include <stdio.h>

#define EOF (-1)

int ft_isalpha(int c)
{
    if (c == EOF)
        return 0;
    if (c < 0 || c > 255)
        return 0;
    c = (unsigned char)c;
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    return 0;
}

int main(void)
{
    int test_chars[] = {
        'A',    // uppercase letter
        'z',    // lowercase letter
        'M',    // uppercase letter
        '0',    // digit
        '@',    // punctuation
        200,    // extended ASCII (not letter)
        -5,     // negative invalid
        EOF,    // EOF constant
        ' ',    // space
        'g'     // lowercase letter
    };

    int i;
    int size = sizeof(test_chars) / sizeof(test_chars[0]);

    for (i = 0; i < size; i++)
    {
        int c = test_chars[i];
        printf("ft_isalpha(%d '%c') = %d\n", c, (c >= 32 && c <= 126) ? c : '?', ft_isalpha(c));
    }

    return 0;
}

