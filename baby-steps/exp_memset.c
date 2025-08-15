// ft_memset
// Fills the first 'n' bytes of the block of memory pointed to by 's'
// with the byte value 'c'.
//
// Parameters:
// - s: pointer to the block of memory to fill.
// - c: the value (as int) to set — only the lower 8 bits are used.
// - n: the number of bytes to set.
//
// Return:
// - The original pointer 's'.
//
// Usage:
// - Often used to initialize arrays or structs with a specific byte pattern.
// - Works for any type of binary data, not just text strings.

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;    // Pointer to memory as raw bytes
	unsigned char	c_char;   // Byte version of 'c'
	size_t			i;

	dest = (unsigned char *)s;      // Cast to byte pointer
	c_char = (unsigned char)c;      // Convert int to unsigned char (0–255 range)
	i = 0;
	while (i < n)                   // Repeat 'n' times
	{
		dest[i] = c_char;            // Set each byte to 'c_char'
		i++;
	}
	return (s);                      // Return original pointer (not dest)
}
