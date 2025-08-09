#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    struct {
        const char *s1;
        const char *s2;
        size_t n;
    } tests[] = {
        {"Hello", "Hello", 5},
        {"Hello", "Helium", 3},
        {"Hello", "Helium", 5},
        {"Hello", "Hell", 10},
        {"", "", 1},
        {"abc", "abc", 0},
        {NULL, "abc", 3},
        {"abc", NULL, 3},
        {NULL, NULL, 3},
    };
    int num_tests = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < num_tests; i++)
    {
        int orig = 0;
        if (tests[i].s1 && tests[i].s2)
            orig = strncmp(tests[i].s1, tests[i].s2, tests[i].n);
        int ft = ft_strncmp(tests[i].s1, tests[i].s2, tests[i].n);

        printf("Test %d:\n", i + 1);
        printf("  s1: \"%s\"\n", tests[i].s1 ? tests[i].s1 : "NULL");
        printf("  s2: \"%s\"\n", tests[i].s2 ? tests[i].s2 : "NULL");
        printf("  n:  %zu\n", tests[i].n);
        printf("  strncmp  : %d\n", orig);
        printf("  ft_strncmp: %d\n\n", ft);
    }

    return 0;
}


//The Tests

//Compare equal strings (full length and partial length)
//Compare strings that differ early, middle, or after n characters
//Compare when n is zero (should return 0)
//Compare empty strings
//Compare when one or both strings are NULL (your function returns 0; standard strncmp behavior is undefined)
//Confirm return values: 0 if equal, positive if first non-matching char in s1 > s2, negative otherwise

//The Output

//Test 1:
//strncmp  : 0
//ft_strncmp: 0

//Test 2:
//strncmp  : 0
//ft_strncmp: 0

//Test 3:
//strncmp  : negative (because 'l' (108) < 'i' (105) difference)
//ft_strncmp: negative

//Test 4:
//strncmp  : positive (because 'o' (111) > '\0' (0))
//ft_strncmp: positive

//Test 5:
//strncmp  : 0
//ft_strncmp: 0

//Test 6:
//strncmp  : 0  (n=0 means no comparison)
//ft_strncmp: 0

//Test 7, 8, 9:
//ft_strncmp returns 0 (your safe behavior)
//strncmp is undefined behavior (don't call with NULL)
