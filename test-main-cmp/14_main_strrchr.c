#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const char *test_str = "Hello, World! Hello!";
    int test_chars[] = { 'H', 'o', '!', 'z', '\0', ',' };
    int n = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < n; i++)
    {
        int c = test_chars[i];
        char *orig = strrchr(test_str, c);
        char *ft = ft_strrchr(test_str, c);

        printf("Searching last '%c' (ASCII %d):\n", (c >= 32 && c <= 126) ? c : '?', c);
        printf("  strrchr:    %s\n", orig ? orig : "NULL");
        printf("  ft_strrchr: %s\n\n", ft ? ft : "NULL");
    }

    return 0;
}


//The Test

//Search for last occurrence of characters present multiple times
//Search for characters present only once
//Search for character '\0' (should return pointer to string terminator)
//Search for characters not present in the string (should return NULL)
//Test with empty string

//The Output

//"Hello!", "orld! Hello!", "!", "NULL", "", ", Hello! Hello!"

//Searching last 'H': last occurrence at start of "Hello!" near end
//Searching last 'o': last occurrence in "orld! Hello!"
//Searching last '!': last character, "!"
//Searching 'z': not found, NULL
//Searching '\0': pointer to string terminator, empty string ""
//Searching last ',': substring ", Hello! Hello!"
