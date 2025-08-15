// ft_memmove
// Copies 'n' bytes from 'src' to 'dest' safely, even if the memory areas overlap.
//
// Parameters:
// - dest: pointer to the destination memory
// - src:  pointer to the source memory
// - n:    number of bytes to copy
//
// Return:
// - Pointer to destination (dest).
//
// Key difference from ft_memcpy:
// - If memory regions overlap, ft_memmove ensures the copy happens correctly
//   by choosing the right direction (forward or backward).

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	// Extra safety: if both src and dest are NULL, just return NULL
	if (dest == NULL && src == NULL)
		return (NULL);

	i = 0;

	// Case 1: Copy forward (non-overlapping or safe order)
	// If src starts AFTER dest, we can copy from beginning to end
	if (src > dest)
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i]; // copy byte i
			i++;
		}
	}

	// Case 2: Copy backward (handles overlap correctly)
	// If src starts BEFORE dest, and regions overlap,
	// copy from the end backwards to avoid overwriting data not yet copied.
	i = n;
	if (src < dest)
	{
		while (i > 0)
		{	
			((char *)dest)[i - 1] = ((char *)src)[i - 1]; // copy from the end
			i--;
		}
	}

	return (dest);
}
