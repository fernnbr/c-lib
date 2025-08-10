#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    const char *tests[] = {
        "12345",
        "   6789",
        "\t\n  -42",
        "+42abc",
        "   +0",
        "   -0",
        "abc123",
        "",
        "+",
        "-",
        "2147483647",   // INT_MAX
        "-2147483648",  // INT_MIN
        "9999999999999999999999999" // overflow, undefined behavior
    };
    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++)
    {
        const char *str = tests[i];
        int orig = atoi(str);
        int ft = ft_atoi(str);

        printf("Test %d: \"%s\"\n", i + 1, str);
        printf("  atoi   : %d\n", orig);
        printf("  ft_atoi: %d\n\n", ft);
    }

    return 0;
}


//The Tests

//Strings with leading whitespace characters (spaces, tabs, newlines)
//Optional leading '+' or '-' signs
//Valid digit sequences converted properly
//Strings with no digits (should return 0)
//Strings with digits followed by non-digit characters (stop parsing at first non-digit)
//Overflow and underflow behavior (not handled explicitly here, just test normal range)
//Empty string or NULL pointer (your function will crash on NULL, so avoid NULL)
//Test strings with only '+' or '-' sign and no digits (should return 0)

//The Outputs

//Test 1: "12345"
//atoi   : 12345
//ft_atoi: 12345

//Test 2: "   6789"
//atoi   : 6789
//ft_atoi: 6789

//Test 3: "\t\n  -42"
//atoi   : -42
//ft_atoi: -42

//Test 4: "+42abc"
//atoi   : 42
//ft_atoi: 42

//Test 5: "   +0"
//atoi   : 0
//ft_atoi: 0

//Test 6: "   -0"
//atoi   : 0
//ft_atoi: 0

//Test 7: "abc123"
//atoi   : 0
//ft_atoi: 0

//Test 8: ""
//atoi   : 0
//ft_atoi: 0

//Test 9: "+"
//atoi   : 0
//ft_atoi: 0

//Test 10: "-"
//atoi   : 0
//ft_atoi: 0

//Test 11: "2147483647"
//atoi   : 2147483647
//ft_atoi: 2147483647

//Test 12: "-2147483648"
//atoi   : -2147483648
//ft_atoi: -2147483648

//Test 13: "9999999999999999999999999"
//atoi   : (undefined, may overflow)
//ft_atoi: (undefined, may overflow)
