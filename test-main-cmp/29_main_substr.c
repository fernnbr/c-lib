#include <stdio.h>
#include <stdlib.h>
#include "libft.h"  // for ft_substr, ft_strlen, ft_strdup, ft_strlcpy prototypes

int main(void)
{
    const char *str = "Hello, World!";
    char *result;

    // Normal substring
    result = ft_substr(str, 7, 5);
    printf("ft_substr(\"%s\", 7, 5) = \"%s\"\n", str, result);
    free(result);

    // Substring from start
    result = ft_substr(str, 0, 5);
    printf("ft_substr(\"%s\", 0, 5) = \"%s\"\n", str, result);
    free(result);

    // start beyond string length
    result = ft_substr(str, 50, 5);
    printf("ft_substr(\"%s\", 50, 5) = \"%s\"\n", str, result);
    free(result);

    // len longer than remaining string
    result = ft_substr(str, 7, 50);
    printf("ft_substr(\"%s\", 7, 50) = \"%s\"\n", str, result);
    free(result);

    // len = 0
    result = ft_substr(str, 3, 0);
    printf("ft_substr(\"%s\", 3, 0) = \"%s\"\n", str, result);
    free(result);

    // NULL input
    result = ft_substr(NULL, 0, 5);
    printf("ft_substr(NULL, 0, 5) = %p\n", (void *)result);

    return 0;
}


//The Tests

//Extract a substring fully inside the string bounds
//Extract a substring starting at 0 (full prefix)
//Extract a substring with start beyond the string length (should return empty string)
//Extract substring with len longer than remaining string (should truncate)
//Extract substring with len zero (should return empty string)
//Test NULL input string (should return NULL)
//Confirm returned substring is properly null-terminated
//Confirm memory allocation success and free after usage


//The Output

//ft_substr("Hello, World!", 7, 5) = "World"
//ft_substr("Hello, World!", 0, 5) = "Hello"
//ft_substr("Hello, World!", 50, 5) = ""
//ft_substr("Hello, World!", 7, 50) = "World!"
//ft_substr("Hello, World!", 3, 0) = ""
//ft_substr(NULL, 0, 5) = (nil)
