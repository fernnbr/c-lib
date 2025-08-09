#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    const char *test_strings[] = {
        "Hello, World!",
        "",
        NULL,
        "Another test string"
    };
    int n = sizeof(test_strings) / sizeof(test_strings[0]);

    for (int i = 0; i < n; i++)
    {
        const char *s = test_strings[i];

        char *ft_dup = ft_strdup(s);
        char *orig_dup = NULL;
        if (s)
            orig_dup = strdup(s);

        printf("Test %d: \"%s\"\n", i + 1, s ? s : "NULL");

        if (ft_dup)
            printf("  ft_strdup: \"%s\"\n", ft_dup);
        else
            printf("  ft_strdup: NULL\n");

        if (orig_dup)
            printf("  strdup   : \"%s\"\n", orig_dup);
        else
            printf("  strdup   : NULL\n");

        free(ft_dup);
        free(orig_dup);
        printf("\n");
    }

    return 0;
}


//The Tests 

//Normal strings: confirm returned pointer points to a new allocated copy equal to original
//Empty string: should return a pointer to an empty string ("")
//Null pointer input: should return NULL
//Confirm that modifying the duplicate does not affect the original string (deep copy)

//The Output 

//Test 1: "Hello, World!"
//ft_strdup: "Hello, World!"
//strdup   : "Hello, World!"
//Original string   : "Hello, World!"

//Test 2: ""
//ft_strdup: ""
//strdup   : ""

//Test 3: "NULL"
//ft_strdup: NULL
//strdup   : NULL

