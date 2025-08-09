#include <stdio.h>

int ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int main(void)
{
	int test_vals[] = {0, 31, 32, 65, 127, 128, -1, 255, 300};
	int size = sizeof(test_vals) / sizeof(test_vals[0]);

	for (int i = 0; i < size; i++)
	{
		int c = test_vals[i];
		printf("ft_isascii(%d) = %d\n", c, ft_isascii(c));
	}
	return 0;
}

//Expected Result 

0, 31, 32, 65, 127, 128, -1, 255, 300

