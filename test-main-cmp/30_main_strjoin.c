#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char *result;

    // Normal join
    result = ft_strjoin("Hello, ", "World!");
    printf("ft_strjoin(\"Hello, \", \"World!\") = \"%s\"\n", result);
    free(result);

    // s1 NULL
    result = ft_strjoin(NULL, "World!");
    printf("ft_strjoin(NULL, \"World!\") = \"%s\"\n", result);
    free(result);

    // s2 NULL
    result = ft_strjoin("Hello, ", NULL);
    printf("ft_strjoin(\"Hello, \", NULL) = \"%s\"\n", result);
    free(result);

    // Both NULL
    result = ft_strjoin(NULL, NULL);
    printf("ft_strjoin(NULL, NULL) = \"%s\"\n", result);
    free(result);

    // Empty strings
    result = ft_strjoin("", "Test");
    printf("ft_strjoin(\"\", \"Test\") = \"%s\"\n", result);
    free(result);

    result = ft_strjoin("Test", "");
    printf("ft_strjoin(\"Test\", \"\") = \"%s\"\n", result);
    free(result);

    return 0;
}


//The Tests

//Join two non-empty strings (normal case)
//Join with first string NULL (should return duplicate of second)
//Join with second string NULL (should return duplicate of first)
//Join with both strings NULL (should return empty string "")
//Join empty strings "" with another string
//Confirm result is properly null-terminated
//Confirm allocated memory and free after usage

//The Output

//ft_strjoin("Hello, ", "World!") = "Hello, World!"
//ft_strjoin(NULL, "World!") = "World!"
//ft_strjoin("Hello, ", NULL) = "Hello, "
//ft_strjoin(NULL, NULL) = ""
//ft_strjoin("", "Test") = "Test"
//ft_strjoin("Test", "") = "Test"
