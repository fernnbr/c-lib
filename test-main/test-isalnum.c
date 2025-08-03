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
