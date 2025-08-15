// ft_strjoin
// Concatenates two strings 's1' and 's2' into a newly allocated string.
//
// Parameters:
// - s1: first null-terminated string
// - s2: second null-terminated string
//
// Return:
// - Pointer to a new string that is the result of s1 + s2
// - NULL if memory allocation fails
//
// Notes:
// - The returned string must be freed by the caller.
// - Original strings s1 and s2 are not modified.

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;      // pointer to the new concatenated string
	size_t	s1_len;  // length of s1
	size_t	s2_len;  // length of s2
	size_t	i;       // index for s1
	size_t	j;       // index for s2

	s1_len = ft_strlen(s1); // get length of s1
	s2_len = ft_strlen(s2); // get length of s2

	// Allocate memory for new string (+1 for null terminator)
	s3 = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!s3)
		return (NULL); // allocation failed

	// Copy s1 into the new string
	i = 0;
	while (i < s1_len)
	{
		s3[i] = s1[i];
		i++;
	}

	// Copy s2 immediately after s1
	j = 0;
	while (j < s2_len)
	{
		s3[i + j] = s2[j];
		j++;
	}

	// Null-terminate the new string
	s3[i + j] = '\0';

	return (s3); // return concatenated string
}
