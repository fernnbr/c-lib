#include <stdio.h>
#include <string.h>
#include "libft.h"  // for ft_memchr prototype

int main(void)
{
    const char buffer[] = "Hello, World!";
    int test_chars[] = { 'H', 'o', '!', 'z', '\0', ',' };
    size_t n_values[] = { 5, 8, 13, 13, 13, 10 };
    int count = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < count; i++)
    {
        int c = test_chars[i];
        size_t n = n_values[i];

        void *orig = memchr(buffer, c, n);
        void *ft = ft_memchr(buffer, c, n);

        printf("Searching '%c' (ASCII %d) in first %zu bytes:\n", (c >= 32 && c <= 126) ? c : '?', c, n);
        printf("  memchr   : %s\n", orig ? (char *)orig : "NULL");
        printf("  ft_memchr: %s\n\n", ft ? (char *)ft : "NULL");
    }

    // Test n=0 and NULL pointer
    void *ft_null = ft_memchr(NULL, 'a', 10);
    void *ft_zero = ft_memchr(buffer, 'H', 0);
    printf("ft_memchr(NULL, 'a', 10) returned: %s\n", ft_null ? "NOT NULL" : "NULL");
    printf("ft_memchr(buffer, 'H', 0) returned: %s\n", ft_zero ? "NOT NULL" : "NULL");

    return 0;
}

//The Tests: 

//Search for a character present in the first n bytes of a buffer (beginning, middle, end)
//Search for a character not present in the first n bytes (should return NULL)
//Search for the null byte '\0' inside the buffer (if applicable)
//Test with n = 0 (should return NULL)
//Test with NULL pointer (your function returns NULL safely)

//The Outputs: 

//Searching 'H' (ASCII 72) in first 5 bytes:
//memchr   : Hello, World!
//ft_memchr: Hello, World!

//Searching 'o' (ASCII 111) in first 8 bytes:
//memchr   : o, World!
//ft_memchr: o, World!

//Searching '!' (ASCII 33) in first 13 bytes:
//memchr   : !
//ft_memchr: !

//Searching 'z' (ASCII 122) in first 13 bytes:
//memchr   : NULL
//ft_memchr: NULL

//Searching '?' (ASCII 0) in first 13 bytes:
//memchr   : NULL
//ft_memchr: NULL

//Searching ',' (ASCII 44) in first 10 bytes:
//memchr   : , World!
//ft_memchr: , World!

//ft_memchr(NULL, 'a', 10) returned: NULL
//ft_memchr(buffer, 'H', 0) returned: NULL
