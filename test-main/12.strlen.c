//How the function originally works according to C manual

//The standard C library function strlen(const char *s) computes the length of the string pointed to by s 
//by counting the number of characters before the terminating null byte '\0'. 
//It does not include the null terminator itself in the length count. 
//The function expects a valid null-terminated string

//What its expected return
//Returns the number of characters in the string, of type size_t

//Expected input range

//The input s must be a valid pointer to a null-terminated string
//Undefined behavior if s is NULL or not null-terminated

//Summary of the behavior of the function

//Iterate from the first character, 
//incrementing a counter until the null character '\0' is reached. 
// Return the count of characters before the null byte

//Application examples

//Measuring string length to allocate memory
//Iterating over strings
//Validating input lengths

//What I have to handle to comply with the original function

// The string must be null-terminated.
// The function does not check for NULL pointer input (undefined behavior if NULL).
// Count stops exactly at the first '\0' byte.

//How to handle possible errors (resilient code)

//To be fully safe, check if s == NULL and return 0 or handle error (not required by standard strlen).
//However, standard strlen assumes valid input

//How to handle the points on 6) applied to function

//Keep the loop simple and fast, no null check to mimic standard strlen.
//If you want safety, you can add a check, but this breaks standard behavior.

//Important notes about the function

//Input must be a valid pointer to a null-terminated string, else undefined behavior.
//strlen does not count the terminating '\0'.
//Running on very large strings can be costly (linear time).
//Usually optimized by the compiler or libc.

//Resilient Code

size_t	ft_strlen(const char *s)
{
	size_t	length;

	if (!s)
		return (0); // Safety: avoid crash if s is NULL (optional)

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}


//Without null check 
Used to calculate a str length

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}



//Original Code

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
