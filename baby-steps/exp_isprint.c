// ft_isprint
// Checks if a character is printable (ASCII 32–126).
//
// Parameters:
// - c: integer value to check
//
// Return:
// - 1 (true) if 'c' is printable
// - 0 (false) otherwise
//
// Notes:
// - Includes space (' ') = 32
// - Excludes DEL (127) and control characters (0–31)

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
