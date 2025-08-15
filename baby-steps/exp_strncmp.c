// ft_strncmp
// Compares up to 'n' characters of two strings 's1' and 's2'.
//
// Parameters:
// - s1: first null-terminated string
// - s2: second null-terminated string
// - n: maximum number of characters to compare
//
// Return:
// - 0 if the first 'n' characters of s1 and s2 are equal
// - Positive value if first differing character in s1 > s2
// - Negative value if first differing character in s1 < s2
//
// Notes:
// - Comparison is done using unsigned char values, matching standard strncmp behavior.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr_s1; // unsigned pointer to s1
	unsigned char	*ptr_s2; // unsigned pointer to s2

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;

	while (n > 0) // compare up to n characters
	{
		// Stop and return difference if:
		// 1. characters differ
		// 2. end of either string is reached
		if (*ptr_s1 != *ptr_s2 || *ptr_s1 == '\0' || *ptr_s2 == '\0')
			return (*ptr_s1 - *ptr_s2);

		ptr_s1++;
		ptr_s2++;
		n--;
	}

	return (0); // first n characters are identical
}
