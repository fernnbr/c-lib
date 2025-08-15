// ft_strrchr
// Locates the last occurrence of character 'c' in string 's'.
//
// Parameters:
// - s: pointer to the null-terminated string
// - c: character to search for (converted to char)
//
// Return:
// - Pointer to the last occurrence of 'c' in 's'
// - If 'c' is '\0', returns pointer to the null terminator at the end of 's'
// - Returns NULL if 'c' is not found
//
// Notes:
// - Works like the standard strrchr from <string.h>.
// - The returned pointer points inside the original string.

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence; // keeps track of the last position of 'c'
	char	char_to_find;     // character to search for

	last_occurrence = NULL;          // initialize to NULL
	char_to_find = (char)c;          // cast int to char

	// Traverse the string
	while (*s != '\0')
	{
		if (*s == char_to_find)      // found a match
		{
			last_occurrence = (char *)s; // update last_occurrence
		}
		s++;
	}

	// Special case: if searching for '\0', return pointer to end of string
	if (char_to_find == '\0')
	{
		return ((char *)s);
	}

	// Return pointer to last occurrence, or NULL if not found
	return (last_occurrence);
}
