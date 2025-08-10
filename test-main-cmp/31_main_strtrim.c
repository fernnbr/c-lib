#include <stdio.h>
#include <stdlib.h>
#include "libft.h"s

int main(void)
{
    char *result;

    // Normal trimming
    result = ft_strtrim("  \t\nHello, World! \n\t  ", " \n\t");
    printf("ft_strtrim(\"  \\t\\nHello, World! \\n\\t  \", \" \\n\\t\") = \"%s\"\n", result);
    free(result);

    // String with only trim chars
    result = ft_strtrim("   \n\t", " \n\t");
    printf("ft_strtrim(\"   \\n\\t\", \" \\n\\t\") = \"%s\"\n", result);
    free(result);

    // Empty trim set (no chars to trim)
    result = ft_strtrim("  Hello  ", "");
    printf("ft_strtrim(\"  Hello  \", \"\") = \"%s\"\n", result);
    free(result);

    // Empty string s1
    result = ft_strtrim("", " ");
    printf("ft_strtrim(\"\", \" \") = \"%s\"\n", result);
    free(result);

    // NULL s1 or set
    result = ft_strtrim(NULL, " ");
    printf("ft_strtrim(NULL, \" \") = %p\n", (void *)result);

    result = ft_strtrim("Hello", NULL);
    printf("ft_strtrim(\"Hello\", NULL) = %p\n", (void *)result);

    return 0;
}


//The Tests

//Trim characters in set from both the start and end of s1
//Trim with s1 containing only characters from set (should return empty string)
//Trim with empty set (should return a duplicate of s1)
//Trim with s1 empty string (should return empty string)
//Handle NULL inputs (should return NULL)
//Confirm proper allocation and null-termination
//Confirm it does not trim characters not in set

//The Outputs

//ft_strtrim("  \t\nHello, World! \n\t  ", " \n\t") = "Hello, World!"
//ft_strtrim("   \n\t", " \n\t") = ""
//ft_strtrim("  Hello  ", "") = "  Hello  "
//ft_strtrim("", " ") = ""
//ft_strtrim(NULL, " ") = (nil)
//ft_strtrim("Hello", NULL) = (nil)
