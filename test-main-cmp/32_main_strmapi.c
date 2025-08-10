#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "libft.h"  // for ft_strmapi and ft_strlen prototypes

// Example function: uppercase all characters
char to_uppercase(unsigned int i, char c)
{
    (void)i; // unused parameter
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

// Example function: shift characters by index
char shift_char(unsigned int i, char c)
{
    return (c + i);
}

int main(void)
{
    char *result;

    // Test uppercase
    result = ft_strmapi("Hello, World!", to_uppercase);
    if (result)
    {
        printf("ft_strmapi uppercase: %s\n", result);
        free(result);
    }

    // Test shift by index
    result = ft_strmapi("abc", shift_char);
    if (result)
    {
        printf("ft_strmapi shift_char: %s\n", result);
        free(result);
    }

    // Test empty string
    result = ft_strmapi("", to_uppercase);
    if (result)
    {
        printf("ft_strmapi empty string: \"%s\"\n", result);
        free(result);
    }

    // Test NULL string
    result = ft_strmapi(NULL, to_uppercase);
    printf("ft_strmapi NULL string: %p\n", (void *)result);

    // Test NULL function
    result = ft_strmapi("test", NULL);
    printf("ft_strmapi NULL function: %p\n", (void *)result);

    return 0;
}


//The Tests

//Apply a simple function to each character (e.g., uppercase conversion)
//Test with empty string (should return an empty string)
//Test with NULL for s or f (should return NULL)
//Check if returned string is properly allocated and null-terminated
//Verify that the function pointer f receives correct index and character
//Test with function that changes characters differently depending on index

//The Output

//ft_strmapi uppercase: HELLO, WORLD!
//ft_strmapi shift_char: ace
//ft_strmapi empty string: ""
//ft_strmapi NULL string: (nil)
//ft_strmapi NULL function: (nil)
