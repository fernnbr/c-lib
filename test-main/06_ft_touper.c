//How the original toupper works (manual definition)
//In the C standard library, toupper(int c) converts a lowercase letter ('a'–'z') to its uppercase equivalent.
//If c is not a lowercase letter, it simply returns c unchanged.

//It's defined in <ctype.h> and requires c to be:

//An unsigned char (0–255), or
//EOF (-1)


//Expected Return
//Returns uppercase version of c if c is between 'a' and 'z'
//Returns c unchanged if it's not a lowercase letter

//Code

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

//Main

#include <stdio.h>
#include <ctype.h>  // for comparison
#include "libft.h"  // your own ft_toupper

int main(void)
{
	int tests[] = {
		'a', 'b', 'z',    // lowercase
		'A', 'Z',         // already uppercase
		'0', '!', ' ',    // not letters
		EOF, -1, 128, 255 // edge cases
	};

	int size = sizeof(tests) / sizeof(tests[0]);

	printf(" c | toupper | ft_toupper\n");
	printf("---|---------|-------------\n");

	for (int i = 0; i < size; i++)
	{
		int c = tests[i];
		printf("%3d|   %3d    |    %3d\n", c, toupper(c), ft_toupper(c));
	}
	return 0;
}

//Expected Return

Letters converted to upercase 

