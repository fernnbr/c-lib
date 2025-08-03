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

