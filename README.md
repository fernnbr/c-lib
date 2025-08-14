# c-lib

"Time is an illusion. Lunchtime doubly so."
— The Hitchhiker's Guide to the Galaxy, Douglas Adams

## Welcome, stranger! 

This document was created with one goal in mind: **to help beginners and students studying software engineering, especially those at 42 School, understand and review each function in the Libft project with clarity and confidence**. The purpose here is **entirely educational**. This is not a reference manual for production code, but a companion guide to support your **studies only**. Whether you're preparing for exams, reviewing your own code, or trying to grasp the logic behind C standard functions, this documentation is structured to meet you where you are at the beginning of your learning journey.

## Structure

I am dividing different content into diferent repos. This guide is meant to be simple, practical, and 100% beginner-friendly. 

**_/originals:** Shows my original code, the 1st I wrote it 

**_/resilient-upgrade:** Shows the changes I made after learning more through peers, research and code review by seniors 

**_/test-main-cmp:** The mains that I used to test and compare with the original function in C (when needed) + expected input 

**_/explanations:** More topics and content about each function, like its purpose, "twin" on std lib C, and so on 

**_/test-valgrind:** Valgrind tests, main and bash to look for memory leaks (or not) 

**_/baby-steps:** Explanations step by steps of each function (of what is happening) 


## Explanations Repo (under construction)

It's expected to find in this repo the following structure:  

1) How the function originally works according to C manual (if applicable). (How the function is expected to behave)
2) Function Prototype
3) Difficult Level (based on my conception - totally subjective here)
4) How the function behaves
5) The Behave Analogy (An analogy to what the function does) 
6) The Parameters of the Function
7) Expected Inputs 
8) What is expected to return
9) Use cases application (examples)
10) Errors Management: A list of what I have to comply in this function (compared to the original)
11) The Code of the Function (resilient code)
12) Why makes sense handling possible errors
13) Gotchas (Insights during building/implementing the function)
14) Implementation Tips
15) Recycle: It's possible to reuse in other function in the lib?
16) Main Concepts Involved: Key programming concepts used in the function (e.g., pointers, loops, memory allocation)
17) Software Engineering Tips: Best practices related to clean code, readability, maintainability, or testing relevant to this function
18) Other interesting notes about the function: Curiosities, findings and so on  


## The Functions and Files in This Project 

1) ft_atoi  
2) ft_bzero  
3) ft_calloc  
4) ft_isalnum  
5) ft_isalpha  
6) ft_isascii  
7) ft_isdigit  
8) ft_isprint  
9) ft_itoa  
10) ft_memchr  
11) ft_memcmp
12) ft_memcpy
13) ft_memmove
14) ft_memset
15) ft_putchar_fd
16) ft_putendl_fd
17) ft_putnbr_fd
18) ft_putstr_fd
19) ft_split
20) ft_strchr
21) ft_striteri
22) ft_strjoin
23) ft_strlcat
24) ft_strlcpy
25) ft_strlen
26) ft_strmapi
27) ft_strncmp
28) ft_strnstr
29) ft_strrchr
30) ft_strtrim
31) ft_strdup
32) ft_substr
33) ft_tolower
34) ft_toupper
35) Makefile
36) Libft.h

## Function Segments 

## Memory Functions: [Use for memory manipulation]

ft_bzero – Write zeroes to memory  
ft_calloc – Allocate memory and initialize to zero  
ft_memchr – Search for a byte in memory  
ft_memcmp – Compare memory areas  
ft_memcpy – Copy memory area  
ft_memmove – Move memory (handles overlap)  
ft_memset – Fill memory with a constant byte  

## Character Checks & Conversions: [Checks for types or changes]

**Character Checks:**  

ft_isalnum – Alphanumeric check  
ft_isalpha – Alphabetic check  
ft_isascii – ASCII check  
ft_isdigit – Digit check  
ft_isprint – Printable character check  

**Character Conversions:**  

ft_tolower – Convert uppercase to lowercase  
ft_toupper – Convert lowercase to uppercase  

## String Functions: [Manipulate and analyze strings]

**Basic String Handling:**  

ft_strlen – Get string length  
ft_strchr – Locate first occurrence of a character  
ft_strrchr – Locate last occurrence of a character  
ft_strncmp – Compare strings up to n chars  
ft_strnstr – Locate a substring in a string  

**Copy & Concatenation:**  

ft_strlcat – Append strings with buffer size  
ft_strlcpy – Copy strings with buffer size  

**String Creation & Transformation:**  

ft_strdup – Duplicate a string  
ft_substr – Extract substring  
ft_strjoin – Join two strings  
ft_strtrim – Trim characters from start/end  
ft_split – Split string into array using delimiter  
ft_strmapi – Apply function to each char (returns new string)  
ft_striteri – Apply function to each char in-place  

## Conversions: [Number/string conversions]

ft_atoi – Convert string to int  
ft_itoa – Convert int to string  

## File Descriptor Output: [Output to a file descriptor]

ft_putchar_fd – Output a char  
ft_putstr_fd – Output a string  
ft_putendl_fd – Output a string + newline  
ft_putnbr_fd – Output an integer  

## Extra Checker 

You can use Francinette to run **extra** tests (that can work or not) 
Access: https://github.com/xicodomingues/francinette
