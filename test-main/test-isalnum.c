#include <stdio.h>

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int ft_isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int ft_isalnum(int c)
{
    return (ft_isdigit(c) || ft_isalpha(c));
}

int main(void)
{
    char test_chars[] = {'a', 'Z', '5', '@', ' ', '0', 'g', '#'};
    int i;

    for (i = 0; i < (int)(sizeof(test_chars) / sizeof(test_chars[0])); i++)
    {
        char c = test_chars[i];
        printf("ft_isalnum('%c' = %d) = %d\n", c, c, ft_isalnum(c));
    }

    return 0;
}


//Expected_Results

//ft_isalnum('a' = 97) = 1
//ft_isalnum('Z' = 90) = 1
//ft_isalnum('5' = 53) = 1
//ft_isalnum('@' = 64) = 0
//ft_isalnum(' ' = 32) = 0
//ft_isalnum('0' = 48) = 1
//ft_isalnum('g' = 103) = 1
//ft_isalnum('#' = 35) = 0

//Acording to Manual (isalnum)
//Input: 
//an int representing a character or EOF

//Output:
//[true] Return non-zero (usually 1) if c is a letter or digit
//[false] Return 0 otherwise



//Compliance With Manual 
//To comply with the standard C isalnum manual behavior, your ft_isalnum implementation should consider these key edge cases

//Input Range — Valid Characters Only
//Only inputs in the range of unsigned char (0–255) or EOF (-1) are valid.
//Passing values outside this range results in undefined behavior per the C standard

//What you should do:
//1. If your function accepts an int c, either:
//Cast c to (unsigned char) before testing, OR
//Return 0 immediately if c is outside 0–255 and is not EOF

//2. Handling EOF
//When c == EOF (usually -1), isalnum returns 0 (false).
//So your function should explicitly return 0 for EOF

//3. Check only ASCII Letters and Digits
//Since standard isalnum is locale-dependent, but your ft_isalnum typically only handles ASCII characters, it should:
//Return true only if c is '0'–'9' or 'A'–'Z' or 'a'–'z'
//All other characters should return 0

//4. Avoid Undefined Behavior
//Do not call your function with negative values other than EOF.
//Validate or sanitize input if you want to be extra safe

//New Resilient Preposition

//int ft_isalnum(int c)
//{
    //if (c == EOF)
        //return 0;
    //if (c < 0 || c > 255)
        //return 0;
    //c = (unsigned char)c;
    //return (ft_isdigit(c) || ft_isalpha(c));
//}



