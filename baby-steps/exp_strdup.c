// ft_strdup
// Creates a new copy of the string 's' in freshly allocated memory.
//
// Parameters:
// - s: the null-terminated string to duplicate.
//
// Return:
// - Pointer to the newly allocated string (identical to 's').
// - NULL if memory allocation fails.
//
// Usage:
// - Useful when you need to make a copy of a string that won't be affected
//   if the original is modified or freed.
// - The returned string must be freed by the caller.

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*strdup;

	len = ft_strlen(s);  // Find the length of the source string
	strdup = (char *)ft_calloc((len + 1), sizeof(char)); // Allocate +1 for '\0'
	if (strdup == NULL)
		return (NULL);  // Return NULL if memory allocation fails
	i = 0;
	while (i < len + 1)  // Copy characters, including the '\0'
	{
		strdup[i] = s[i];
		i++;
	}
	return (strdup); // Return the new string
}
