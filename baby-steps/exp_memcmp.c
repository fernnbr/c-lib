// ft_memcmp
// Compares the first 'n' bytes of two memory areas (s1 and s2).
// Works on any kind of data, not just strings.
//
// Parameters:
// - s1: pointer to the first memory block
// - s2: pointer to the second memory block
// - n: number of bytes to compare
//
// Return:
// - 0 if all bytes are equal (or if n == 0).
// - Positive value if the first differing byte in s1 is greater than in s2.
// - Negative value if the first differing byte in s1 is less than in s2.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_char; // byte-by-byte view of s1
	unsigned char	*s2_char; // byte-by-byte view of s2
	size_t			i;        // index for comparison

	// Cast to unsigned char* so that comparison is done on raw byte values (0–255)
	s1_char = (unsigned char *)s1;
	s2_char = (unsigned char *)s2;

	i = 0;
	while (i < n) // loop over bytes
	{
		if (s1_char[i] != s2_char[i])        // found a difference
			return (s1_char[i] - s2_char[i]); // return signed difference
		i++;
	}
	return (0); // all compared bytes are equal
}
