// ft_strtrim
// Returns a new string which is a copy of 's1' with all characters
// in 'set' removed from the beginning and the end.
//
// Parameters:
// - s1: the input string to trim
// - set: string containing characters to remove from both ends
//
// Return:
// - Pointer to a newly allocated trimmed string
// - NULL if memory allocation fails or if s1/set is NULL
//
// Notes:
// - Uses ft_strchr to check if a character is in 'set'.
// - Original string 's1' is not modified.
// - Caller must free the returned string.

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;    // new trimmed string
	size_t	start;  // index of first non-set character
	size_t	end;    // index after last non-set character

	// Check for NULL input
	if (!s1 || !set)
		return (NULL);

	// Find first character not in 'set' from the start
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;

	// Find first character not in 'set' from the end
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;

	// Allocate memory for trimmed string (+1 for null terminator)
	s2 = (char *)malloc((end - start + 1) * sizeof(char));
	if (!s2)
		return (NULL);

	// Copy the trimmed substring into new string
	ft_strlcpy(s2, &s1[start], end - start + 1);

	// Explicit null-termination (redundant, but safe)
	s2[end - start] = '\0';

	return (s2); // return the trimmed string
}
