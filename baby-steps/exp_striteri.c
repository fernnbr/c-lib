// ft_striteri
// Applies the function 'f' to each character of the string 's',
// passing the character's index and a pointer to it.
//
// Parameters:
// - s: The string to iterate over (must be modifiable).
// - f: The function to apply. Receives (index, pointer_to_char).
//
// Return:
// - None (the string 's' is modified in place).
//
// Notes:
// - The function 'f' can modify the characters of 's' directly.
// - Behavior is undefined if 's' or 'f' is NULL.

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])               // Iterate until the null terminator
	{
		f(i, &s[i]);           // Apply function to current char (pass address)
		i++;
	}
}
