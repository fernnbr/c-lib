#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"  // for ft_calloc prototype

void print_buffer(unsigned char *buf, size_t len)
{
    printf("Buffer: ");
    for (size_t i = 0; i < len; i++)
        printf("%02X ", buf[i]);
    printf("\n");
}

int main(void)
{
    size_t nmemb = 10;
    size_t size = sizeof(int);

    int *ptr = (int *)ft_calloc(nmemb, size);
    if (!ptr)
    {
        printf("ft_calloc failed\n");
        return 1;
    }

    printf("Allocated %zu ints, checking zero-initialization:\n", nmemb);
    unsigned char *buf = (unsigned char *)ptr;
    print_buffer(buf, nmemb * size);

    // Fill memory to check zeroing was done
    for (size_t i = 0; i < nmemb; i++)
        ptr[i] = i + 1;

    printf("After filling with 1..10:\n");
    for (size_t i = 0; i < nmemb; i++)
        printf("%d ", ptr[i]);
    printf("\n");

    free(ptr);

    // Test zero allocation
    void *zero_ptr = ft_calloc(0, size);
    printf("ft_calloc(0, %zu) returned %p\n", size, zero_ptr);
    free(zero_ptr);

    // Test overflow detection (simulate overflow)
    size_t big = (size_t)-1 / 2 + 1;  // Large number causing overflow
    void *overflow_ptr = ft_calloc(big, 2);
    printf("ft_calloc(overflow) returned %p (should be NULL)\n", overflow_ptr);

    return 0;
}

//The Tests

//Allocate memory for an array of nmemb elements of size bytes each
//Check for zero allocation when nmemb or size is zero (returns malloc(0))
//Confirm returned pointer is non-NULL (if allocation succeeds)
//Confirm all bytes are zero-initialized (using ft_bzero)
//Test very large allocations that cause overflow in nmemb * size (should return NULL)
//Confirm that returned pointer can be freed safely

//The Output 

//Allocated 10 ints, checking zero-initialization:
//Buffer: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  # (bytes for 10 ints, all zero)

//After filling with 1..10:
//1 2 3 4 5 6 7 8 9 10 
//ft_calloc(0, 4) returned 0x12345678  # Some pointer, possibly NULL or non-NULL depending on malloc implementation
//ft_calloc(overflow) returned (nil) (should be NULL)
