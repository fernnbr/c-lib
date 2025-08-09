#include <stdio.h>

int ft_isdigit(int c);
{
	return (c >= 48 && c <= 57);
}

int ft_isalpha(int c);
{
    if (c == EOF)
        return (0);
    if (c < 0 || c > 255)
        return (0);
  
    c = (unsigned char)c;
  
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);

    return (0);
}

int ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

int main(void)
{
	char test_chars[] = {'a', 'Z', '5', '@', ' ', '0', 'g', '#'};
	int i;

	for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++)
	{
		char c = test_chars[i];
		printf("ft_isalnum('%c' = %d) = %d\n", c, c, ft_isalnum(c));
	}

	return 0;
}
