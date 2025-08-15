// ft_strlcpy
// Copies up to size-1 characters from the null-terminated string 'src' 
// to 'dst', and always null-terminates 'dst' if size > 0.
//
// Parameters:
// - dst: destination buffer
// - src: source string
// - size: total size of destination buffer (including space for '\0')
//
// Return:
// - The length of the source string 'src'.
// - This allows detection of truncation: if return >= size, truncation occurred.
//
// Notes:
// - Behaves like the standard strlcpy from BSD/C99.
// - Safe alternative to strcpy, prevents buffer overflow.

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	// If the buffer size is 0, we cannot copy anything
	// Just return the length of src
	if (size == 0)
		return (ft_strlen(src));

	i = 0;

	// Copy characters from src to dst, leaving room for null terminator
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}

	// Null-terminate dst
	dst[i] = '\0';

	// Return total length of src
	return (ft_strlen(src));
}
