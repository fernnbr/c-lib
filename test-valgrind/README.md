## Checking with Valgrind 

**valgrind ./a.out**


## Recommended Valgrind Priority 00 Block 01: 

ft_calloc: Because it allocates memory

ft_itoa: Because it allocates a new string

ft_split: Because it allocates multiple strings and an array of pointers

ft_strjoin: Because it allocates new string

ft_strmapi: because it allocates new string

ft_strtrim: Because it allocates new string

ft_strdup: Because itallocates copy of a string

ft_substr: Because it allocates new string


## Most Probability of Memory Leaks | Extra Cautious 

**ft_split, ft_calloc, ft_itoa, ft_strdup, ft_strjoin, ft_substr, and ft_strtrim**


## ## Recommended Valgrind Priority 01 | Block 02:

ft_bzero: Sets a block of memory to all zero bytes

ft_memchr: Finds the first occurrence of a byte in a block of memory

ft_memcmp: Compares two memory blocks, byte by byte

ft_memcpy: Copies memory from one location to another (non-overlapping)

ft_memmove: Copies memory from one location to another (safe for overlapping regions)

ft_memset: Fills a block of memory with a specific byte value

ft_strchr: Finds the first occurrence of a character in a string

ft_striteri: Applies a function to each character of a string (with its index)

ft_strlcat: Appends one string to another, limiting total size to avoid overflow

ft_strlcpy: Copies one string into another, limiting total size to avoid overflow

ft_strlen: Returns the length of a string (not counting the null terminator)

ft_strncmp: Compares two strings up to a given number of characters

ft_strnstr: Finds the first occurrence of a substring in another string (within a limit)

ft_strrchr: Finds the last occurrence of a character in a string

## What is Valgrind?

Valgrind is a **program analysis tool** that runs your program inside a special "virtual machine" that can detect:

1. Memory leaks (when you allocate memory but never free it)
2. Invalid memory access (reading/writing outside allocated boundaries)
3. Use of uninitialized memory (using variables before giving them a value)
4. Double frees (freeing the same pointer twice)

## Expected Outputs | Everything ok

==12345== HEAP SUMMARY:
==12345==     in use at exit: 0 bytes in 0 blocks
==12345==   total heap usage: X allocs, X frees, Y bytes allocated
==12345== All heap blocks were freed -- no leaks are possible
==12345== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

**Where:**

1. X allocs, X frees → Every allocation had a matching free
2. Y bytes allocated → Total bytes requested during execution
3. All heap blocks were freed → No memory leak
4. ERROR SUMMARY: 0 errors → No invalid reads/writes, no double frees

**For Block 01**
All heap blocks were freed -- no leaks are possible
ERROR SUMMARY: 0 errors from 0 contexts

**For Block 02**
ERROR SUMMARY: 0 errors from 0 contexts

