#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const char *test_str = "Hello, World!";
    int test_chars[] = { 'H', 'o', '!', 'z', '\0', ',' };
    int n = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < n; i++)
    {
        int c = test_chars[i];
        char *orig = strchr(test_str, c);
        char *ft = ft_strchr(test_str, c);

        printf("Searching '%c' (ASCII %d):\n", (c >= 32 && c <= 126) ? c : '?', c);
        printf("  strchr:    %s\n", orig ? orig : "NULL");
        printf("  ft_strchr: %s\n\n", ft ? ft : "NULL");
    }

    return 0;
}



//The Tests 

//Search for characters that exist in the string (beginning, middle, end)
//Search for character '\0' (should return pointer to string end)
//Search for characters not present in the string (should return NULL)
//Search for special or non-printable characters

//The Outputs

//"Hello, World!", "o, World!", "!", "NULL", "", ", World!"

//Searching 'H': points to "Hello, World!" (start)
//Searching 'o': first occurrence at index 4, substring "o, World!"
//Searching '!': last char, substring "!"
//Searching 'z': not found, NULL
//Searching '\0': returns pointer to string terminator, empty string ""
//Searching ',': substring ", World!"
