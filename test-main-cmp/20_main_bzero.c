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
    unsigned char buffer[10] = {0xFF, 0xAB, 0xCD, 0xEF, 0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC};

    printf("Before ft_bzero:\n");
    print_buffer(buffer, sizeof(buffer));

    ft_bzero(buffer, 5);

    printf("After ft_bzero 5 bytes:\n");
    print_buffer(buffer, sizeof(buffer));

    ft_bzero(buffer + 5, 5);

    printf("After ft_bzero next 5 bytes:\n");
    print_buffer(buffer, sizeof(buffer));

    ft_bzero(NULL, 5);  // Should safely do nothing

    ft_bzero(buffer, 0);  // Should do nothing

    return 0;
}


//The Tests

//Set a buffer of various sizes to zero
//Test with n = 0 (should do nothing)
//Test with NULL pointer (your function safely returns without crash)
//Confirm that bytes are zeroed out
//Confirm no changes outside the specified range
//Test with different buffer contents before zeroing

//The Output
//Before ft_bzero:
//Buffer: FF AB CD EF 12 34 56 78 9A BC 
//After ft_bzero 5 bytes:
//Buffer: 00 00 00 00 00 34 56 78 9A BC 
//After ft_bzero next 5 bytes:
//Buffer: 00 00 00 00 00 00 00 00 00 00 
