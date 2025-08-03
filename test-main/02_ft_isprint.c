// How the function originally works (manual definition)
// The standard C function isprint(int c) checks if the given character is a printable character 
// that is, any character that has a visible representation, including space (' '). 
// In ASCII, this includes characters from 32 to 126 inclusive. This range covers:

// 1. Space ' ' (32)
// 2. Digits, uppercase/lowercase letters
// 3. Symbols like !, @, ~, etc.
// 4. Anything below 32 (like \n, \t, \r) or above 126 (like DEL 127, extended ASCII, or negative numbers) is not printable

// Expected Return

// Returns 1 if c is a printable character (ASCII 32–126)
// Returns 0 otherwise

// Expected Input Range
// c must be either:
// An unsigned char value (0–255)
// Or EOF (usually -1) [EOF stands for End Of File]
// Passing any other int value is undefined behavior per the standard

// Summary of Behavior
// isprint(c) returns 1 if the character has a visual glyph (visible character), including space. 
// It excludes all control characters (ASCII 0–31), DEL (127), and anything outside ASCII (≥128 or negative)

// To comply with the standard, your function must:

// 1. Accept only 0–255 or EOF
// 2. Return 1 for values in the range 32–126
// 3. Return 0 otherwise
// 4. Do not operate on negative values < -1 or values > 255
// 5. Cast c to unsigned char for safety
// 6. Don’t treat locale differently (your version only handles ASCII)

//How to apply those compliance points

// Safely cast c to unsigned char after checking for invalid range
// Handle EOF separately

// Important Notes

// isprint includes the space ' ' (ASCII 32)
// Does not include newline, tab, or any non-visible/control characters
// It is not locale-sensitive
// It is often paired with isgraph() (which excludes space)

//My ORIGINAL code 

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

// Resilient Code 

int ft_isprint(int c)
{
	if (c == EOF || c < 0 || c > 255)
		return 0;
	c = (unsigned char)c;
	return (c >= 32 && c <= 126);
}

// Main to test the Code 

#include <stdio.h>

int ft_isprint(int c)
{
	if (c == EOF || c < 0 || c > 255)
		return 0;
	c = (unsigned char)c;
	return (c >= 32 && c <= 126);
}

int main(void)
{
	int test_vals[] = {
		' ',     // 32 - space (printable)
		'@',     // 64 - printable
		'A',     // 65 - printable
		'~',     // 126 - printable
		127,     // DEL (not printable)
		31,      // control char (not printable)
		0,       // NUL (not printable)
		-1,      // invalid
		EOF,     // should be 0
		200      // extended ASCII (not printable)
	};

	int size = sizeof(test_vals) / sizeof(test_vals[0]);

	for (int i = 0; i < size; i++)
	{
		int c = test_vals[i];
		printf("ft_isprint(%d '%c') = %d\n", c, (c >= 32 && c <= 126) ? c : '?', ft_isprint(c));
	}
	return 0;
}

//Expected Output

1,1,1,1,0,0,0,0,0,0

