#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const char *big = "Hello, World! Welcome!";
    const char *tests[] = {
        "World",
        "Welcome",
        "Hello",
        "!",
        "",
        "NotHere",
        NULL
    };
    size_t lens[] = {15, 25, 5, 20, 20, 20, 20};
    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++)
    {
        const char *little = tests[i];
        size_t len = lens[i];

        char *orig = NULL;
        if (big && little)
            orig = strnstr(big, little, len);
        char *ft = ft_strnstr(big, little, len);

        printf("Test %d: searching \"%s\" in \"%s\" with len=%zu\n", i + 1, little ? little : "NULL", big, len);
        printf("  strnstr  : %s\n", orig ? orig : "NULL");
        printf("  ft_strnstr: %s\n\n", ft ? ft : "NULL");
    }

    return 0;
}



//The Tests

//Search for substring little fully contained in big within the first len bytes
//little is empty string (should return big)
//little not found within len bytes (return NULL)
//little found but only partially within len (should NOT match)
//big or little NULL pointers (returns NULL safely)
//Search with len smaller than length of big
//Search with len larger than length of big

//The Output

//Test 1: searching "World" in "Hello, World! Welcome!" with len=15
//strnstr  : "World! Welcome!"
//ft_strnstr: "World! Welcome!"

//Test 2: searching "Welcome" in "Hello, World! Welcome!" with len=25
//strnstr  : "Welcome!"
//ft_strnstr: "Welcome!"

//Test 3: searching "Hello" in "Hello, World! Welcome!" with len=5
//strnstr  : "Hello, World! Welcome!"
//ft_strnstr: "Hello, World! Welcome!"

//Test 4: searching "!" in "Hello, World! Welcome!" with len=20
//strnstr  : "!"
//ft_strnstr: "!"

//Test 5: searching "" in "Hello, World! Welcome!" with len=20
//strnstr  : "Hello, World! Welcome!"
//ft_strnstr: "Hello, World! Welcome!"

//Test 6: searching "NotHere" in "Hello, World! Welcome!" with len=20
//strnstr  : NULL
//ft_strnstr: NULL

//Test 7: searching "NULL" in "Hello, World! Welcome!" with len=20
//strnstr  : NULL
//ft_strnstr: NULL
