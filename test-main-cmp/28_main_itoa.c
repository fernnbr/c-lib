#include <stdio.h>
#include <stdlib.h>
#include "libft.h"  // for ft_itoa and ft_calloc prototype

int main(void)
{
    int tests[] = {0, 1, -1, 12345, -12345, 2147483647, -2147483648};
    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++)
    {
        char *str = ft_itoa(tests[i]);
        if (!str)
        {
            printf("ft_itoa failed for %d\n", tests[i]);
            continue;
        }
        printf("ft_itoa(%d) = \"%s\"\n", tests[i], str);
        free(str);
    }
    return 0;
}

//The Tests

//Convert positive integers (e.g., 0, 1, 12345)
//Convert negative integers (e.g., -1, -12345)
//Convert INT_MIN and INT_MAX (to test boundary and negative overflow handling)
//Confirm returned string is correctly null-terminated
//Confirm memory is allocated (and handle NULL if allocation fails)
//Confirm the string is properly formatted with sign and digits
//Check for 0 correctly converted to "0"

//The Output

//ft_itoa(0) = "0"
//ft_itoa(1) = "1"
//ft_itoa(-1) = "-1"
//ft_itoa(12345) = "12345"
//ft_itoa(-12345) = "-12345"
//ft_itoa(2147483647) = "2147483647"
//ft_itoa(-2147483648) = "-2147483648"
