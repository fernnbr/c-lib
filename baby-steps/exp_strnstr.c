// ft_strnstr
// Locates the first occurrence of the null-terminated string 'little' 
// within the string 'big', but only searches the first 'len' characters of 'big'.
//
// Parameters:
// - big: the string to search in
// - little: the substring to find
// - len: maximum number of characters in 'big' to search
//
// Return:
// - Pointer to the first occurrence of 'little' in 'big'
// - NULL if 'little' is not found in the first 'len' characters
// - If 'little' is empty, returns 'big'
//
// Notes:
// - Works like the standard strnstr from BSD/C99.
// - Search stops at either end of 'big' or when len is exceeded.

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i; // index in 'big'
	unsigned int	j; // index in 'little'

	// If 'little' is empty, return 'big' immediately
	if (*little == '\0')
		return ((char *) big);

	i = 0;
	while (big[i] && i < len) // loop through 'big' up to 'len'
	{
		j = 0;

		// Compare 'little' with substring starting at big[i]
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;

			// If reached end of 'little', match found
			if (little[j] == '\0')
				return ((char *) &(big[i]));

			// If characters differ or end of 'big' reached, break
			else if (little[j] != big[i + j] || big[i + j] == '\0')
				break ;
		}
		i++;
	}

	// No match found within 'len' characters
	return (NULL);
}
