#include <stdio.h>
#include <string.h>
#include "libft.h"

void print_buffer(const unsigned char *buf, size_t len)
{
    printf("Buffer: ");
    for (size_t i = 0; i < len; i++)
        printf("%02X ", buf[i]);
    printf("\n");
}

int main(void)
{
    unsigned char src[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    unsigned char dest[10] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

    printf("Before ft_memcpy:\n");
    print_buffer(dest, sizeof(dest));

    ft_memcpy(dest, src, sizeof(src));

    printf("After ft_memcpy (full copy):\n");
    print_buffer(dest, sizeof(dest));

    // Partial copy
    unsigned char dest2[10] = {0xAA};
    ft_memcpy(dest2, src, 5);
    printf("After ft_memcpy (partial 5 bytes):\n");
    print_buffer(dest2, sizeof(dest2));

    // n = 0 (no copy)
    ft_memcpy(dest2, src, 0);
    printf("After ft_memcpy (n=0, no copy):\n");
    print_buffer(dest2, sizeof(dest2));

    // Both NULL test
    void *ret = ft_memcpy(NULL, NULL, 5);
    printf("ft_memcpy(NULL, NULL, 5) returned: %p\n", ret);

    return 0;
}


//The Tests

//Copy a known buffer to another buffer, full length and partial length
//Test copying zero bytes (n = 0) — should do nothing, just return dest
//Test copying when dest or src is NULL:
//Your function returns NULL if both are NULL
//Otherwise undefined behavior (similar to standard memcpy which requires valid pointers)
//Confirm that bytes are correctly copied and source is unchanged



//The Output

//Before ft_memcpy:
//Buffer: FF FF FF FF FF FF FF FF FF FF 
//After ft_memcpy (full copy):
//Buffer: 00 01 02 03 04 05 06 07 08 09 
//After ft_memcpy (partial 5 bytes):
//Buffer: 00 01 02 03 04 AA AA AA AA AA 
//After ft_memcpy (n=0, no copy):
//Buffer: 00 01 02 03 04 AA AA AA AA AA 
//ft_memcpy(NULL, NULL, 5) returned: (nil) or 0x0


