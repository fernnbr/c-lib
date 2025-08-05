//How the original isalnum works (manual definition)
//The standard C function isalnum(int c) checks whether the given character is alphanumeric, i.e., a letter (A–Z, a–z) or a digit (0–9)

//Expected Return
//Returns 1 if c is an ASCII letter or digit
//Returns 0 otherwise

//Expected Input Range
//The manual says:
//c must be representable as an unsigned char or be equal to EOF.
//Valid input: 0–255 or EOF (-1)
//Anything else: undefined behavior

//Summary of Behavior
//isalnum(c) returns:

//1 if c is from '0' to '9', 'A' to 'Z', or 'a' to 'z'
// 0 for anything else: symbols, whitespace, punctuation, control characters

//Checklist to Comply with Manual
//To behave like isalnum, your function must:

//Accept any int
//Return 1 only for:
//'0'–'9'
//'A'–'Z'
//'a'–'z'
//Return 0 for anything else
//Work for any unsigned char or EOF
//Handle EOF explicitly (if defensive programming)

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

//Important Notes
//This function’s behavior depends entirely on the accuracy of ft_isdigit and ft_isalpha.
//If either one misbehaves with values like -5 or 300, ft_isalnum will too.
//Not locale-dependent — it should be ASCII-based unless otherwise extended

//Improved Version (clean and safe):

int	ft_isalnum(int c)
{
	// If you want to be super-safe:
	if (c == EOF || c < 0 || c > 255)
		return 0;
	return (ft_isdigit(c) || ft_isalpha(c));
}

This ensures safety against invalid inputs — especially useful when you don’t control the source (e.g. input from getchar())


// Main to test

#include <stdio.h>
#include <ctype.h>  // For comparison
#include "libft.h"  // Your version

int main(void)
{
	int tests[] = {
		'0', '5', '9',     // digits
		'A', 'z', 'M',     // letters
		'!', ' ', '\n',    // not alphanumeric
		127, -1, 200       // edge cases
	};
	int size = sizeof(tests) / sizeof(tests[0]);

	printf(" c | isalnum | ft_isalnum\n");
	printf("---|---------|------------\n");

	for (int i = 0; i < size; i++)
	{
		int c = tests[i];
		printf("%3d|    %d    |     %d\n", c, isalnum(c), ft_isalnum(c));
	}
	return 0;
}

//Expected Output

1,1,1,1,1,1,0,0,0,0,0,0


