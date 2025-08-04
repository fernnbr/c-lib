// Original Function (per C Standard Manual)

// The function isdigit() checks whether the passed character is a decimal digit character.
// It returns nonzero (true) if c is between '0' and '9', inclusive (i.e., ASCII 48–57). 
// Otherwise, it returns 0

//Expected Return

//1 if c is a digit ('0'–'9'), otherwise 0

//Expected Input Range

// The argument c must be either:
// Representable as an **unsigned char** (i.e., 0 to 255), or
// Equal to the constant EOF

//Summary of Behavior

//Returns true only for ASCII characters '0' to '9'.
//Does not accept hexadecimal digits (a–f), or numeric symbols like ², Ⅷ, etc

//Application Examples & Analogies

// Useful when validating user input as strictly numeric:
// Text filters: accept only digits (e.g., phone numbers, PINs)
// Parsers: recognize number tokens in strings
// Analogy: Think of isdigit() as a security guard who only lets 0–9 through the door

//Compliance Checklist

//To make your ft_isdigit behave like isdigit():

// Accept an int c
// Return 1 only for ASCII 48–57
// Return 0 for everything else
// Work properly for any unsigned char value or EOF
// Avoid undefined behavior with out-of-range values

//My orginal code

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}


// Resilient code 

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

//Suggested Main

#include <stdio.h>
#include <ctype.h>  // for comparison
#include "libft.h"

int	main(void)
{
	int tests[] = {'0', '5', '9', 'a', 'Z', ' ', '!', -1, 127, 200};
	int size = sizeof(tests) / sizeof(tests[0]);

	printf(" c | isdigit | ft_isdigit\n");
	printf("---|---------|------------\n");

	for (int i = 0; i < size; i++)
	{
		int c = tests[i];
		printf("%3d|    %d    |     %d\n", c, isdigit(c), ft_isdigit(c));
	}
	return (0);
}


//Expected Results 

1,1,1,0,0,0,0,0,0,0




