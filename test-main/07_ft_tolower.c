//Original Manual Definition
//The C standard function tolower(int c) converts an uppercase ASCII letter ('A'–'Z') into its lowercase counterpart.
//If c is not an uppercase letter, it's returned unchanged.

//Defined in <ctype.h>
//Input must be an unsigned char value (0–255) or EOF

//Expected Return
//If c is an uppercase letter: returns its lowercase equivalent
//If not: returns c unchanged

//Expected Input Range
//Valid: c ∈ 0–255 (as unsigned char) or EOF
//Anything outside this range 
//undefined behavior

// Behavior Summary
// Converts uppercase to lowercase 
//otherwise returns input

//Checklist for Compliance
//To match the original tolower:
//Accept int c
//Return c + 32 only if c is uppercase (65–90)
//Return c otherwise
//Avoid undefined behavior:
//Only accept 0–255 or EOF
//Optionally cast c to unsigned char before logic

//Code 

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

//Safe Code

int	ft_tolower(int c)
{
	if (c == EOF || c < 0 || c > 255)
		return c;
	c = (unsigned char)c;
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

//Main

#include <stdio.h>
#include <ctype.h>   // For comparison
#include "libft.h"   // Your version

int main(void)
{
	int tests[] = {
		'A', 'B', 'Z',   // Uppercase
		'a', 'z',        // Lowercase (should remain)
		'0', '!', ' ',   // Symbols
		EOF, -1, 128, 255 // Edge cases
	};

	int size = sizeof(tests) / sizeof(tests[0]);

	printf(" c | tolower | ft_tolower\n");
	printf("---|---------|------------\n");

	for (int i = 0; i < size; i++)
	{
		int c = tests[i];
		printf("%3d|   %3d    |    %3d\n", c, tolower(c), ft_tolower(c));
	}
	return 0;
}

//Expected Output 
//Converted character to lowercase 

