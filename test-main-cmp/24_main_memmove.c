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
    unsigned char buffer[20] = "1234567890abcdefghij";

    printf("Original buffer:\n");
    print_buffer(buffer, 20);

    // Non-overlapping copy (copy first 5 bytes to position 10)
    ft_memmove(buffer + 10, buffer, 5);
    printf("After ft_memmove non-overlapping (copy first 5 bytes to pos 10):\n");
    print_buffer(buffer, 20);

    // Overlapping copy: dest after src, overlapping (copy 10 bytes from pos 0 to pos 5)
    ft_memmove(buffer + 5, buffer, 10);
    printf("After ft_memmove overlapping (dest > src):\n");
    print_buffer(buffer, 20);

    // Overlapping copy: dest before src, overlapping (copy 10 bytes from pos 5 to pos 0)
    ft_memmove(buffer, buffer + 5, 10);
    printf("After ft_memmove overlapping (dest < src):\n");
    print_buffer(buffer, 20);

    // n = 0 (no operation)
    ft_memmove(buffer, buffer + 5, 0);
    printf("After ft_memmove with n=0 (no change expected):\n");
    print_buffer(buffer, 20);

    // Both NULL
    void *ret = ft_memmove(NULL, NULL, 5);
    printf("ft_memmove(NULL, NULL, 5) returned: %p\n", ret);

    return 0;
}



//The Tests

//Copy bytes where src and dest do not overlap (normal copy)
//Copy bytes where src and dest overlap and dest is after src (backward copy to avoid overwrite)
//Copy bytes where src and dest overlap and dest is before src (forward copy)
//Copy zero bytes (n = 0) — should do nothing
//Test with both dest and src NULL (your function returns NULL)
//Confirm buffer contents after copy are correct
//Compare behavior with standard memmove

//The Outputs

//Original buffer:
//Buffer: 31 32 33 34 35 36 37 38 39 30 61 62 63 64 65 66 67 68 69 6A 

//After ft_memmove non-overlapping (copy first 5 bytes to pos 10):
//Buffer: 31 32 33 34 35 36 37 38 39 30 31 32 33 34 35 66 67 68 69 6A 

//After ft_memmove overlapping (dest > src):
//Buffer: 31 32 33 34 35 31 32 33 34 35 31 32 33 34 35 66 67 68 69 6A 

//After ft_memmove overlapping (dest < src):
//Buffer: 31 32 33 34 35 31 32 33 34 35 31 32 33 34 35 66 67 68 69 6A 

//After ft_memmove with n=0 (no change expected):
//Buffer: 31 32 33 34 35 31 32 33 34 35 31 32 33 34 35 66 67 68 69 6A 
//ft_memmove(NULL, NULL, 5) returned: (nil) or 0x0
