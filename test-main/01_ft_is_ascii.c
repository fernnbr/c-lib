//How the function originally works (manual definition)

//The standard C function isascii(int c) checks whether c is a valid ASCII character, meaning it lies in the range 0 to 127 (inclusive). 
//This range includes control characters (like newline, tab), printable characters (' ', 'A', '0', etc.), 
//and symbols (@, #, etc.). It returns non-zero (true) if c is an ASCII character, and 0 otherwise

//Expected Return

//Returns 1 if c is in the ASCII range (0–127)
//Returns 0 otherwise

//Expected Input Range

//c can technically be any integer, but:
//The function only returns true for values between 0 and 127.
//Negative values and values >127 return 0.
//Unlike isalpha or isdigit, isascii does not require c to be in the unsigned char range or EOF — it handles any int safely

//Summary of Behavior

//isascii(c) returns true if c is a valid ASCII code point, i.e., from 0 (NUL) to 127 (DEL). 
//It's useful when checking whether a character belongs to the standard ASCII table before applying other checks like isalpha, isprint, etc

//Application Examples (Analogies)

//Think of ASCII as a "VIP list" of 128 characters from basic letters and numbers to control characters like newline (\n) and tab (\t).
//This function checks if someone trying to get into the "ASCII Club" is on that list

//What to handle to comply with the manual

// 1. Accept any int (no restriction on input range)
// 2. Return 1 only if 0 <= c <= 127
// 3. Return 0 otherwise

//Important Notes

//This is one of the simplest character classification functions.
//Not locale-sensitive.
//Fully safe with any int input.
//Often used to filter input before further checks

//My previous Version: 

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

//Better Version

int ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// Main to Test it 

#include <stdio.h>

int ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int main(void)
{
	int test_vals[] = {0, 31, 32, 65, 127, 128, -1, 255, 300};
	int size = sizeof(test_vals) / sizeof(test_vals[0]);

	for (int i = 0; i < size; i++)
	{
		int c = test_vals[i];
		printf("ft_isascii(%d) = %d\n", c, ft_isascii(c));
	}
	return 0;
}

//Expected Result 

0, 31, 32, 65, 127, 128, -1, 255, 300

  


