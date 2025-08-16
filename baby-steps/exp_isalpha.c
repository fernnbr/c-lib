// ft_isalpha
// Checks if a character is an alphabetic letter (A–Z or a–z).
//
// Parameters:
// - c: the character code (int) to check
//
// Return:
// - 1 (true) if 'c' is a letter
// - 0 (false) otherwise
//
// Notes:
// - Uses ASCII ranges:
//     - 'A' to 'Z' = 65–90
//     - 'a' to 'z' = 97–122
// - Ignores locale and extended letters (é, ç, ü, etc.).
// - Matches standard isalpha() behavior for ASCII.

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
