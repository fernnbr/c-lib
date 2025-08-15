// ft_memchr
// Scans the first 'n' bytes of the memory block pointed to by 's'
// for the first occurrence of the byte value 'c'.
// Returns a pointer to the matching byte, or NULL if not found.
//
// Parameters:
// - s: pointer to the memory block to search
// - c: value to search for (interpreted as unsigned char)
// - n: number of bytes to check
//
// Return:
// - Pointer to the first occurrence of 'c' within the first n bytes
//   OR NULL if not found.

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c_char;   // the value to search for (1 byte)
	unsigned char	*s_char;  // pointer to memory, treated as byte-by-byte
	size_t			i;        // index for looping

	// Convert search value to unsigned char to match byte values 0..255
	c_char = (unsigned char)c;

	// Cast the generic pointer 's' to an unsigned char* so we can index it
	s_char = (unsigned char *)s;

	i = 0;
	while (i < n) // loop through at most 'n' bytes
	{
		if (s_char[i] == c_char)      // found a match
			return (&s_char[i]);      // return pointer to this byte
		i++;
	}
	return (NULL); // no match found within n bytes
}
