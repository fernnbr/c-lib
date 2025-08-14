// Convert a C string to an int, mimicking the behavior of atoi.

// Notes:
// - Skips leading ASCII whitespace (space and control chars 9..13)
// - Supports one optional leading '+' or '-' sign
// - Accumulates consecutive decimal digits until a non-digit is found
// - Does NOT handle overflow/underflow detection (same as standard atoi)
// - Returns 0 if no digits are found after optional whitespace/sign

int	ft_atoi(const char *nptr)
{
	int	i;        // index to walk through the string
	int	isminus;  // sign multiplier: +1 for positive, -1 for negative
	int	isdigit;  // holds the numeric result so far

	i = 0;
	// 1) Skip leading whitespace:
	// ASCII 32 is ' ' (space).
	// ASCII 9..13 are '\t' (9), '\n' (10), '\v' (11), '\f' (12), '\r' (13).
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;

	// 2) Handle optional sign:
	isminus = 1;                 // default: positive
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')      // if minus, flip the sign multiplier
			isminus *= -1;
		i++;                     // move past the sign character
	}

	// 3) Read digits and build the integer:
	// Initialize the running value to 0.
	isdigit = 0;
	while (ft_isdigit(nptr[i]))  // keep going while current char is '0'..'9'
	{
		// Shift previous digits left by one decimal place: value * 10
		// Then add the numeric value of the current digit:
		// '0'..'9' in ASCII are contiguous; subtracting '0' maps char to 0..9.
		isdigit = isdigit * 10 + (nptr[i] - '0');
		i++; // consume this digit and advance
	}

	// 4) Apply the sign and return.
	return (isdigit * isminus);
}
