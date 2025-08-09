#include <stdio.h>
#include <string.h>
#include "libft.h"

void print_buffer(unsigned char *buf, size_t len)
{
    printf("Buffer: ");
    for (size_t i = 0; i < len; i++)
        printf("%02X ", buf[i]);
    printf("\n");
}

int main(void)
{
    unsigned char buffer[10];

    // Fill with 0xAA
    ft_memset(buffer, 0xAA, sizeof(buffer));
    printf("After ft_memset with 0xAA:\n");
    print_buffer(buffer, sizeof(buffer));

    // Fill first 5 bytes with 0x00
    ft_memset(buffer, 0x00, 5);
    printf("After ft_memset first 5 bytes with 0x00:\n");
    print_buffer(buffer, sizeof(buffer));

    // Test n = 0 (no change)
    ft_memset(buffer, 0xFF, 0);
    printf("After ft_memset with n=0 (no change expected):\n");
    print_buffer(buffer, sizeof(buffer));

    // Test NULL pointer (should safely return NULL)
    void *ret = ft_memset(NULL, 0xFF, 5);
    printf("ft_memset with NULL returned: %p\n", ret);

    return 0;
}


//The Tests

//Fill a buffer with a specific byte value (e.g., 0x00, 0xFF, 'A')
//Test filling entire buffer and partial buffer
//Test with n = 0 (should do nothing)
//Test with NULL pointer (your function returns s safely)
//Confirm the buffer is correctly filled

The Output

//After ft_memset with 0xAA:
//Buffer: AA AA AA AA AA AA AA AA AA AA 
//After ft_memset first 5 bytes with 0x00:
//Buffer: 00 00 00 00 00 AA AA AA AA AA 
//After ft_memset with n=0 (no change expected):
//Buffer: 00 00 00 00 00 AA AA AA AA AA 
//ft_memset with NULL returned: (nil) or 0x0
