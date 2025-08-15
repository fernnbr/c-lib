// ft_calloc
// Allocates memory for an array of 'nmemb' elements, each of 'size' bytes,
// and initializes all bytes to zero.
// 
// Behavior is equivalent to the C standard calloc().
// Key points:
// - Automatically multiplies nmemb * size to find total bytes needed.
// - Checks for integer overflow during multiplication.
// - Returns a zero-initialized memory block, or NULL if allocation fails.
// - If nmemb or size is zero, still returns a unique pointer from malloc(0).
//
// Parameters:
// - nmemb: number of elements to allocate
// - size: size in bytes of each element
//
// Return:
// - Pointer to allocated zero-filled memory, or NULL on failure.

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;        // total number of bytes to allocate
	void	*mem_alloc;   // pointer to allocated memory

	// Calculate total bytes
	total = nmemb * size;

	// If either nmemb or size is zero:
	// malloc(0) can return either NULL or a unique pointer (implementation-defined),
	// but it should be safe to pass to free().
	if (nmemb == 0 || size == 0)
		return (malloc(0));

	// Overflow check:
	// If total / nmemb != size, it means the multiplication overflowed.
	// This prevents allocating too little memory and risking buffer overruns.
	if (nmemb != 0 && total / nmemb != size)
		return (NULL);

	// Allocate memory
	mem_alloc = (void *)malloc(total);
	if (mem_alloc == NULL) // malloc failed
		return (NULL);

	// Zero-fill the allocated memory
	ft_bzero(mem_alloc, total);

	// Return pointer to allocated, zeroed memory
	return (mem_alloc);
}
