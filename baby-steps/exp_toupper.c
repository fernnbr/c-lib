// ft_toupper
// Converts a lowercase letter (a–z) to uppercase (A–Z).
// If the character is not lowercase, returns it unchanged.
//
// Parameters:
// - c: character (int, but usually an unsigned char cast)
//
// Returns:
// - Uppercase equivalent if c is lowercase
// - Otherwise, returns c unchanged
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)   // 'a' (97) .. 'z' (122)
		return (c - 32);       // shift to 'A'..'Z'
	return (c);
}
