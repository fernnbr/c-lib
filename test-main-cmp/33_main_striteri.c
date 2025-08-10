#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"  // for ft_striteri prototype

// Example callback: uppercase characters at even indices
void uppercase_even(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

// Example callback: replace each character with '*'
void replace_with_star(unsigned int i, char *c)
{
    (void)i;
    *c = '*';
}

int main(void)
{
    char str1[] = "hello world";
    char str2[] = "";
    char *null_str = NULL;

    printf("Original str1: %s\n", str1);
    ft_striteri(str1, uppercase_even);
    printf("After uppercase_even: %s\n\n", str1);

    printf("Original str2 (empty): \"%s\"\n", str2);
    ft_striteri(str2, replace_with_star);
    printf("After replace_with_star: \"%s\"\n\n", str2);

    // Test NULL string or NULL function: nothing should happen, no crash
    ft_striteri(null_str, uppercase_even);
    ft_striteri(str1, NULL);

    printf("After NULL tests, str1 unchanged: %s\n", str1);

    return 0;
}


//The Tests

//Modify each character in the string using a callback that has access to index and pointer
//Test with an empty string (should do nothing)
//Test with NULL for s or f (should safely do nothing)
//Verify that the string is correctly modified in place
//Test callbacks that change characters depending on index (e.g., uppercase even indices)
//Confirm no buffer overflow or unexpected behavior

//The Output 

//Original str1: hello world
//After uppercase_even: HeLlO WoRlD

//Original str2 (empty): ""
//After replace_with_star: ""

//After NULL tests, str1 unchanged: HeLlO WoRlD
