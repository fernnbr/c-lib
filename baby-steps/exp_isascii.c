// ft_isascii
// Checks if a character code belongs to the standard ASCII table (0–127).
//
// Parameters:
// - c: integer value to check
//
// Return:
// - 1 (true) if 'c' is within 0–127
// - 0 (false) otherwise
//
// Notes:
// - Covers both printable and control characters (e.g., '\n', '\t').
// - Anything above 127 (like extended ASCII or UTF-8 chars) will return 0.

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
