#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const char *test_strings[] = {
        "Hello, World!",
        "",
        "1234567890",
        "A longer string with spaces and symbols! @#$%^&*()",
        NULL
    };
    int n = sizeof(test_strings) / sizeof(test_strings[0]);

    for (int i = 0; i < n; i++)
    {
        const char *s = test_strings[i];
        if (s == NULL)
        {
            printf("Test %d: NULL string, ft_strlen: %zu, skipping strlen (undefined)\n", i + 1, ft_strlen(s));
            continue;
        }

        size_t orig_len = strlen(s);
        size_t ft_len = ft_strlen(s);

        printf("Test %d: \"%s\"\n", i + 1, s);
        printf("  strlen   : %zu\n", orig_len);
        printf("  ft_strlen: %zu\n\n", ft_len);
    }

    return 0;
}


//The Tests 

//Normal strings with letters, digits, symbols
//Empty string (""), should return 0
//Null pointer (NULL) — your ft_strlen returns 0 safely, but standard strlen is undefined behavior on NULL (don’t call it with NULL)
//Very long strings (optional)

//The Output
//13, 0, 10, 44, 0
