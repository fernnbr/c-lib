// ft_strlcat
// Appends string 'src' to the end of 'dst', with a maximum total size of 'size'.
// Ensures null-termination as long as size > 0.
//
// Parameters:
// - dst: destination string (must be null-terminated)
// - src: source string to append
// - size: total size of the destination buffer (including space for '\0')
//
// Return:
// - Total length of the string it tried to create: initial dst length + src length
// - If return >= size, truncation occurred
//
// Notes:
// - Safer than strcat because it respects buffer size.
// - Behaves like the standard strlcat from BSD/C99.

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dest_len; // current length of dst
	unsigned int	src_len;  // length of src
	unsigned int	i;        // index for src

	// Compute length of dst, but don't go past 'size'
	dest_len = 0;
	while (dst[dest_len] != '\0' && dest_len < size)
		dest_len++;

	// Compute length of src
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;

	// If size <= dest_len, no room to append, return attempted length
	if (size <= dest_len)
		return (size + src_len);

	// Copy src into dst, leaving room for null terminator
	i = 0;
	while (src[i] != '\0' && (dest_len + i + 1) < size)
	{
		dst[dest_len + i] = src[i];
		i++;
	}

	// Null-terminate the result
	dst[dest_len + i] = '\0';

	// Return total length we tried to create (dst initial + src length)
	return (dest_len + src_len);
}
