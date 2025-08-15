// ft_bzero
// Sets the first 'n' bytes of the memory block pointed to by 's' to zero.
// Equivalent to: memset(s, 0, n)
//
// Why use 'unsigned char'? 
// Because memory is handled byte-by-byte, and an unsigned char is guaranteed 
// to be exactly 1 byte and can represent values 0–255.
//
// Parameters:
// - s: pointer to the start of the memory to clear
// - n: number of bytes to set to zero
//
// Return: none (the function modifies memory directly via the pointer).

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;              // pointer to move through memory byte-by-byte

	ptr = (unsigned char *)s;          // cast void* to unsigned char* for arithmetic
	while (n > 0)                      // loop until all n bytes are set
	{
		*ptr = 0;                       // set current byte to zero
		ptr++;                          // move to next byte
		n--;                            // decrease count of remaining bytes
	}
}
