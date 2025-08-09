#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char buffer[20];
    struct {
        const char *src;
        size_t size;
    } tests[] = {
        {"Hello, World!", 20},
        {"Hello, World!", 5},
        {"Hello, World!", 0},
        {"", 10},
        {NULL, 10},
    };
    int n = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < n; i++)
    {
        if (!tests[i].src)
        {
            printf("Test %d: src is NULL, skipping\n", i + 1);
            continue;
        }
        memset(buffer, 'X', sizeof(buffer));  // Hey! Fill buffer to detect overruns
        size_t ret = ft_strlcpy(buffer, tests[i].src, tests[i].size);

        printf("Test %d: src=\"%s\", size=%zu\n", i + 1, tests[i].src, tests[i].size);
        printf("  Returned length: %zu\n", ret);
        printf("  Buffer contents: \"%s\"\n\n", buffer);
    }

    return 0;
}


//The Tests

//Copy normal strings where size is larger than source length (full copy)
//Copy where size is smaller than source length (truncated copy with null terminator)
//Size equals zero (should not copy, just return length of src)
//Empty source string
//Check that dst is always null-terminated if size > 0
//Confirm returned value equals length of src


//Expected Output

//Test 1: src="Hello, World!", size=20
//Returned length: 13
//Buffer contents: "Hello, World!"

//Test 2: src="Hello, World!", size=5
//Returned length: 13
//Buffer contents: "Hell"

//Test 3: src="Hello, World!", size=0
//Returned length: 13
//Buffer contents: "XXXXXXXXXXXXXXX"  (unchanged, no null terminator)

//Test 4: src="", size=10
//Returned length: 0
//Buffer contents: ""   (empty string)

//Test 5: src=NULL, skipping
