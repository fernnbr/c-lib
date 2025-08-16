// ft_memcpy
// Copies exactly 'n' bytes from memory area 'src' to memory area 'dest'
// The memory areas must NOT overlap — for overlapping memory, use ft_memmove instead
//
// Parameters:
// - dest: pointer to the destination memory area
// - src:  pointer to the source memory area
// - n:    number of bytes to copy
//
// Return:
// - Pointer to the destination memory area (dest).
//
// Note: If both dest and src are NULL, returns NULL (extra safety check not in standard memcpy)

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest; // byte-by-byte pointer to destination
	unsigned char	*ptrsrc;  // byte-by-byte pointer to source
	size_t			i;        // loop index

	// Special safety check:
	// Standard memcpy behavior is undefined if both dest and src are NULL,
	// but here it's explicitly handled.
	if (dest == NULL && src == NULL)
		return (NULL);

	// Cast pointers to unsigned char* so we can copy byte by byte
	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;

	i = 0;
	while (i < n) // loop over n bytes
	{
		ptrdest[i] = ptrsrc[i]; // copy each byte
		i++;
	}

	return (dest); // return the original destination pointer
}
