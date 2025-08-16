_"Time is an illusion. Lunchtime doubly so."_
— The Hitchhiker's Guide to the Galaxy, Douglas Adams

# This is c-lib

- [x] Here you will learn more about some C functions and how to mimic them 


## Welcome, stranger! 

This document was created with one goal in mind: **to help beginners and students studying software engineering, especially those at 42 School, understand and review each function in the Libft project with clarity and confidence**. The purpose here is **entirely educational**. This is not a reference manual for production code, but a companion guide to support your **studies only**. Whether you're preparing for exams, reviewing your own code, or trying to grasp the logic behind C standard functions, this documentation is structured to meet you where you are at the beginning of your learning journey.

---

<p align="center">
  <img src="https://media3.giphy.com/media/v1.Y2lkPTc5MGI3NjExNjR4MGF0ZzFzdWpyOGsxOG5leDBzaDQxNzBqaXA3ZHIxNXp4Zm1xaiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/QMHoU66sBXqqLqYvGO/giphy.gif">
</p></figcaption>
<p align="center">
  (How I was while building this project)
</p>

---

## Structure

I am dividing different content into diferent repos. 
**This guide is meant to be simple, practical, and 100% beginner-friendly:** 

- `_/originals` Shows my original code, the 1st I wrote it 

- `_/resilient-upgrade`Shows the changes I made after learning more through peers, research and code review by seniors 

- `_/test-main-cmp` The mains that I used to test and compare with the original function in C (when needed) + expected input 

- `_/explanations` More topics and content about each function, like its purpose, "twin" on std lib C, and so on 

- `_/test-valgrind` Valgrind tests, main and bash to look for memory leaks (or not) 

- `_/baby-steps` Explanations step by step of each function (of what is happening) 

- `_/submitted` 100% approved final functions 


### Explanations Repo (under construction)

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

<br></br>
<div align="center">
  
# The Functions and Files in This Project 

<p align="center">
  <img src="https://media1.giphy.com/media/v1.Y2lkPTc5MGI3NjExaGVoaTEyZGpmcmp3cnMzMG4xeXBmcml5YTA1NTh5dDI0aHN2MDUxZiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/5qoRdabXeT4GY/giphy.gif">
</p></figcaption>
<p align="center">
  (Don't Panic)
</p>

<br></br>

| File / Function       | Purpose / Description |
|----------------------|---------------------|
| ft_atoi              | Converts a string to an integer |
| ft_bzero             | Sets memory to zero |
| ft_calloc            | Allocates memory and initializes it to zero |
| ft_isalnum           | Checks if a character is alphanumeric |
| ft_isalpha           | Checks if a character is alphabetic |
| ft_isascii           | Checks if a character is an ASCII character |
| ft_isdigit           | Checks if a character is a digit |
| ft_isprint           | Checks if a character is printable |
| ft_itoa              | Converts an integer to a string |
| ft_memchr            | Searches for a byte in memory |
| ft_memcmp            | Compares two memory areas |
| ft_memcpy            | Copies memory from source to destination |
| ft_memmove           | Copies memory safely, even if areas overlap |
| ft_memset            | Fills memory with a specific byte |
| ft_putchar_fd        | Writes a character to a file descriptor |
| ft_putendl_fd        | Writes a string with a newline to a file descriptor |
| ft_putnbr_fd         | Writes an integer to a file descriptor |
| ft_putstr_fd         | Writes a string to a file descriptor |
| ft_split             | Splits a string into an array of strings using a delimiter |
| ft_strchr            | Returns a pointer to the first occurrence of a character in a string |
| ft_striteri          | Applies a function to each character of a string with its index |
| ft_strjoin           | Joins two strings into a new string |
| ft_strlcat           | Concatenates strings safely, respecting buffer size |
| ft_strlcpy           | Copies a string safely, respecting buffer size |
| ft_strlen            | Returns the length of a string |
| ft_strmapi           | Applies a function to each character of a string and returns a new string |
| ft_strncmp           | Compares up to n characters of two strings |
| ft_strnstr           | Finds a substring within a string, up to n characters |
| ft_strrchr           | Returns a pointer to the last occurrence of a character in a string |
| ft_strtrim           | Trims characters from the start and end of a string |
| ft_strdup            | Duplicates a string (allocates new memory). |
| ft_substr            | Extracts a substring from a string |
| ft_tolower           | Converts a character to lowercase |
| ft_toupper           | Converts a character to uppercase |
| Makefile             | Automates compilation of all functions into `libft.a` |
| Libft.h              | Header file with function prototypes and necessary includes |

</div>

<br></br>
## Function Segments 

### Memory Functions: [Use for memory manipulation]

`ft_bzero` – Write zeroes to memory  
`ft_calloc` – Allocate memory and initialize to zero  
`ft_memchr` – Search for a byte in memory  
`ft_memcmp` – Compare memory areas  
`ft_memcpy` – Copy memory area  
`ft_memmove` – Move memory (handles overlap)  
`ft_memset` – Fill memory with a constant byte  

### Character Checks & Conversions: [Checks for types or changes]

**Character Checks:**  

`ft_isalnum` – Alphanumeric check  
`ft_isalpha` – Alphabetic check  
`ft_isascii` – ASCII check  
`ft_isdigit` – Digit check  
`ft_isprint` – Printable character check  

**Character Conversions:**  

`ft_tolower` – Convert uppercase to lowercase  
`ft_toupper` – Convert lowercase to uppercase  

### String Functions: [Manipulate and analyze strings]

**Basic String Handling:**  

`ft_strlen` – Get string length  
`ft_strchr` – Locate first occurrence of a character  
`ft_strrchr` – Locate last occurrence of a character  
`ft_strncmp` – Compare strings up to n chars  
`ft_strnstr` – Locate a substring in a string  

**Copy & Concatenation:**  

`ft_strlcat` – Append strings with buffer size  
`ft_strlcpy` – Copy strings with buffer size  

**String Creation & Transformation:**  

`ft_strdup` – Duplicate a string  
`ft_substr` – Extract substring  
`ft_strjoin` – Join two strings  
`ft_strtrim` – Trim characters from start/end  
`ft_split` – Split string into array using delimiter  
`ft_strmapi` – Apply function to each char (returns new string)  
`ft_striteri` – Apply function to each char in-place  

### Conversions: [Number/string conversions]

`ft_atoi` – Convert string to int  
`ft_itoa` – Convert int to string  

### File Descriptor Output: [Output to a file descriptor]

`ft_putchar_fd` – Output a char  
`ft_putstr_fd` – Output a string  
`ft_putendl_fd` – Output a string + newline  
`ft_putnbr_fd` – Output an integer  

<div align="center">
  
## Extra Checker 

<p align="center">
  <img src="https://media4.giphy.com/media/v1.Y2lkPTc5MGI3NjExMXl0aGludDJmaGNseW1heWh4cTRkYmZjbzQ0NnZuNjQ2MzdzYXdmbiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/l1gYcLBSdL7PoDsizo/giphy.gif">
</p></figcaption>
<p align="center">
  (You know... Just to be safe)
</p>

You can use Francinette to run **extra** tests (that can work or not) 
Access: https://github.com/xicodomingues/francinette

</div>
