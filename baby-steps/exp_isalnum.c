// ft_isalnum
// Checks if a character is alphanumeric (a letter or a digit).
//
// Parameters:
// - c: the character code (int) to check
//
// Return:
// - 1 (true) if 'c' is a letter (A-Z or a-z) or digit (0-9)
// - 0 (false) otherwise
//
// Notes:
// - Relies on ft_isdigit() and ft_isalpha(), which should mimic <ctype.h>.
// - Works with the ASCII table.

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
