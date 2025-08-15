// ft_substr
// Returns a newly allocated substring from string 's',
// starting at index 'start' and with maximum length 'len'.
//
// Parameters:
// - s: source null-terminated string
// - start: starting index for the substring
// - len: maximum number of characters to copy
//
// Return:
// - Pointer to the newly allocated substring
// - NULL if memory allocation fails or if s is NULL
//
// Notes:
// - If 'start' is beyond the end of s, returns an empty string.
// - Caller must free the returned string.

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;   // length of the source string
	char	*substr;  // pointer to the new substring

	// Check for NULL input
	if (!s)
		return (NULL);

	s_len = ft_strlen(s); // get length of s

	// If start is beyond the end of s, return empty string
	if (start >= s_len)
		return (ft_strdup(""));

	// Adjust len if it exceeds the remaining string length
	if (len > s_len - start)
		len = s_len - start;

	// Allocate memory for substring (+1 for null terminator)
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);

	// Copy the substring into new memory
	ft_strlcpy(substr, s + start, len + 1);

	return (substr); // return the new substring
}
