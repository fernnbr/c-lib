// ft_tolower
// Converts an uppercase letter (A–Z) to lowercase (a–z).
// If the character is not uppercase, returns it unchanged.
//
// Parameters:
// - c: character (int, but usually an unsigned char cast)
//
// Returns:
// - Lowercase equivalent if c is uppercase
// - Otherwise, returns c unchanged
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)    // 'A' (65) .. 'Z' (90)
		return (c + 32);       // shift to 'a'..'z'
	return (c);
}
