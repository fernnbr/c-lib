// ft_strchr
// Locates the first occurrence of character 'c' in string 's'.
//
// Parameters:
// - s: pointer to the null-terminated string
// - c: character to search for (converted to unsigned char)
//
// Return:
// - Pointer to the first occurrence of 'c' in 's'
// - If 'c' is '\0', returns pointer to the null terminator at the end of 's'
// - Returns NULL (0) if 'c' is not found
//
// Notes:
// - Behaves like the standard strchr from <string.h>.
// - The returned pointer points inside the original string.

char	*ft_strchr(const char *s, int c)
{
	char	*ptr; // pointer to iterate through the string
	int		i;    // index

	ptr = (char *)s; // cast to char* for pointer arithmetic
	i = 0;

	// Loop through the string until the null terminator
	while (ptr[i])
	{
		if (ptr[i] == (unsigned char)c) // check for match
			return (&ptr[i]);           // return pointer to match
		i++;
	}

	// Special case: if searching for '\0', return pointer to null terminator
	if (ptr[i] == '\0' && (unsigned char)c == '\0')
		return (&ptr[i]);

	// Character not found
	return (0);
}
