// ft_strlen
// Computes the length of a null-terminated string 's'.
//
// Parameters:
// - s: pointer to the string
//
// Return:
// - Number of characters in 's' before the null terminator
//
// Notes:
// - Does not count the null terminator itself.
// - Works like the standard strlen from <string.h>.

size_t	ft_strlen(const char *s)
{
	size_t	length; // counter for the number of characters

	length = 0;

	// Loop through the string until we hit the null terminator '\0'
	while (s[length] != '\0')
		length++;

	return (length); // return the length
}
