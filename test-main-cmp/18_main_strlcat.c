#include <stdio.h>
#include <string.h>
#include "libft.h"  // for ft_strlcat prototype

int main(void)
{
    char buffer[20];
    struct {
        const char *initial_dst;
        const char *src;
        size_t size;
    } tests[] = {
        {"Hello", ", World!", 20},
        {"Hello", ", World!", 10},
        {"Hello", ", World!", 5},
        {"Hello", ", World!", 0},
        {"", "Test", 10},
        {NULL, "Test", 10},
        {"Hello", NULL, 10},
    };
    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++)
    {
        if (!tests[i].initial_dst || !tests[i].src)
        {
            printf("Test %d: NULL pointer detected, skipping\n", i + 1);
            continue;
        }
        // Initialize buffer with initial_dst + null terminator + garbage to detect overrun
        size_t init_len = strlen(tests[i].initial_dst);
        memset(buffer, 'X', sizeof(buffer));
        if (init_len >= sizeof(buffer))
            init_len = sizeof(buffer) - 1;
        memcpy(buffer, tests[i].initial_dst, init_len);
        buffer[init_len] = '\0';

        size_t ret = ft_strlcat(buffer, tests[i].src, tests[i].size);

        printf("Test %d: dst=\"%s\", src=\"%s\", size=%zu\n", i + 1, tests[i].initial_dst, tests[i].src, tests[i].size);
        printf("  Returned length: %zu\n", ret);
        printf("  Buffer contents: \"%s\"\n\n", buffer);
    }

    return 0;
}

//The Tests

//Concatenate when size is larger than combined length of dst + src (full append)
//Concatenate when size is smaller, causing truncation and ensuring null-termination
//Size equals zero (should return length of src + size, no concatenation)
//Size less or equal than length of dst (returns size + src_len without concatenation)
//Empty dst string 
//Null pointers for dst or src 
//Confirm returned value is length of string it tried to create (initial length of dst + length of src)

//The Output

//Test 1: dst="Hello", src=", World!", size=20
//Returned length: 13
//Buffer contents: "Hello, World!"

//Test 2: dst="Hello", src=", World!", size=10
//Returned length: 13
//Buffer contents: "Hello, Wo"

//Test 3: dst="Hello", src=", World!", size=5
//Returned length: 13
//Buffer contents: "Hell"

//Test 4: dst="Hello", src=", World!", size=0
//Returned length: 13
//Buffer contents: "XXXXXXXXXXXXXXX"  (unchanged)

//Test 5: dst="", src="Test", size=10
//Returned length: 4
//Buffer contents: "Test"

//Test 6 and 7: skipped (NULL pointers)
