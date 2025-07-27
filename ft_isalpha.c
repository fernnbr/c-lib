#include "libft.h"

// Checks if a character is an alphabetical letter (A-Z or a-z)
int	ft_isalpha(int c)
{
	// If 'c' is between 'A' (65) and 'Z' (90) 
	// OR between 'a' (97) and 'z' (122), return 1 (true)
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	// Otherwise, return 0 (false)
	return (0);
}

//Partioning in "Human Language"
//Please use libft.h library 
//So, this will be called ft_isalpha and it takes an integer 
//So, if the char is greater or equal (>=) to 65 (A: ASCII table) and less or equal than 90 (>=) (Z:ASCII table) 
// OR (||) if char is greater or equal (>=) to 90 (a: ASCII Table) and (&&) less or equal (>=) to 122 (z: ASCII table)
//return (1) thar means true (it is a letter)
//if not, returns 0 (false) (it is not a letter)
