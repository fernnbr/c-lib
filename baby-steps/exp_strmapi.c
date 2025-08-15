// ft_strmapi
// Creates a new string by applying a function 'f' to each character of the string 's'.
// The function 'f' receives the index of the character and the character itself.
//
// Parameters:
// - s: source null-terminated string
// - f: function pointer, receives (index, char) and returns a char
//
// Return:
// - Pointer to a newly allocated string, with the same length as 's', 
//   where each character is transformed by 'f'.
// - NULL if memory allocation fails or if s/f is NULL.
//
// Notes:
// - Original string 's' is not modified.
// - Caller is responsible for freeing the returned string.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;        // index for iteration
	char	*new_str; // pointer to new string
	int		len;      // length of input string

	// Return NULL if input string or function pointer is NULL
	if (!s || !f)
		return (NULL);

	len = ft_strlen(s);            // get length of s
	new_str = (char *)malloc(len + 1); // allocate memory (+1 for '\0')
	if (!new_str)
		return (NULL);             // allocation failed

	new_str[len] = '\0';           // null-terminate the new string

	i = 0;
	while (i < len)
	{
		new_str[i] = (*f)(i, s[i]); // apply function f to each character
		i++;
	}

	return (new_str);              // return the transformed string
}
