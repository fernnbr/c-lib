// ft_isdigit
// Checks if a character is a decimal digit ('0'–'9').
//
// Parameters:
// - c: integer value to check
//
// Return:
// - 1 (true) if 'c' is a digit
// - 0 (false) otherwise
//
// Notes:
// - Accepts ASCII codes 48–57.
// - Does NOT accept signs ('+' or '-').
// - Behavior matches the C standard isdigit().

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
