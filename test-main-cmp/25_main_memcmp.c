#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const unsigned char buf1[] = {1, 2, 3, 4, 5};
    const unsigned char buf2[] = {1, 2, 0, 4, 5};
    const unsigned char buf3[] = {1, 2, 3, 4, 6};
    const unsigned char buf4[] = {1, 2, 3, 4, 5};
    
    struct {
        const void *s1;
        const void *s2;
        size_t n;
    } tests[] = {
        {buf1, buf4, 5},   // equal
        {buf1, buf2, 5},   // differ at index 2 (3 vs 0)
        {buf1, buf3, 5},   // differ at index 4 (5 vs 6)
        {buf1, buf2, 2},   // compare only first 2 bytes equal
        {buf1, buf2, 0},   // n = 0
        {NULL, buf2, 5},   // NULL s1
        {buf1, NULL, 5},   // NULL s2
        {NULL, NULL, 5},   // both NULL
    };
    int n_tests = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n_tests; i++)
    {
        int orig = 0;
        if (tests[i].s1 && tests[i].s2)
            orig = memcmp(tests[i].s1, tests[i].s2, tests[i].n);

        int ft = ft_memcmp(tests[i].s1, tests[i].s2, tests[i].n);

        printf("Test %d: n=%zu\n", i + 1, tests[i].n);
        printf("  memcmp  : %d\n", orig);
        printf("  ft_memcmp: %d\n\n", ft);
    }

    return 0;
}


//The Tests

//Compare identical buffers (should return 0)
//Compare buffers differing at first byte, middle byte, last byte within n
//Compare with n = 0 (should return 0)
//Compare when s1 or s2 is NULL (your function returns 0 safely, though standard behavior is undefined)
//Compare buffers where one is shorter but n is limited to safe range

//The Output

//Test 1: n=5
//memcmp  : 0
//ft_memcmp: 0

//Test 2: n=5
//memcmp  : positive (3 - 0 = 3)
//ft_memcmp: positive

//Test 3: n=5
//memcmp  : negative (5 - 6 = -1)
//ft_memcmp: negative

//Test 4: n=2
//memcmp  : 0
//ft_memcmp: 0

//Test 5: n=0
//memcmp  : 0
//ft_memcmp: 0

//Test 6: n=5 (NULL s1)
//ft_memcmp: 0 (safe in your implementation)
//memcmp: undefined behavior

//Test 7: n=5 (NULL s2)
//ft_memcmp: 0
//memcmp: undefined behavior

//Test 8: n=5 (both NULL)
//ft_memcmp: 0
//memcmp: undefined behavior


