# c-lib

"Time is an illusion. Lunchtime doubly so."
— The Hitchhiker's Guide to the Galaxy, Douglas Adams

Welcome, stranger! This document was created with one goal in mind: **to help beginners and students studying software engineering, especially those at 42 School, understand and review each function in the Libft project with clarity and confidence.

The purpose here is entirely educational. This is not a reference manual for production code, but a companion guide to support your **studies only**. Whether you're preparing for exams, reviewing your own code, or trying to grasp the logic behind C standard functions, this documentation is structured to meet you where you are at the beginning of your learning journey.

To make learning easier, each function is broken down into 15 simple and consistent sections, each one focusing on a different learning angle:

This guide is meant to be simple, practical, and 100% beginner-friendly. 
Feel free to use it like a workbook, reference, or flashcard companion during your Libft study sessions.

Keep learning, keep coding and don't panic. 

Structure: 

**01 Function Name:** 
The exact name of the function as defined in the code 

**02 Difficulty Level:**
Subjective estimate of how hard the function is to understand or implement (Easy / Medium / Hard)

**03 Function Purpose:**
A clear, one-sentence description of what the function does

**04 Function Analogy:**
A simple, real-world comparison to help a beginner understand the concept intuitively

**05 Function Prototype:**
The function declaration as it should appear in a header file, showing return type and parameters

**06 Parameters:**
A list describing each input the function takes: name, type, and purpose

**07 Return Value:**
Explanation of what the function returns and what the value represents

**08 Function Code:**
The full C code implementation of the function, written clearly and commented if necessary

**09 Function Use Cases:**
Short code examples that show how the function can be used in practice

**10 Test Main:**
A basic main() function with tests you can compile and run to verify the function works

**11 Gotchas:**
Common mistakes, edge cases, or behavior that could confuse or mislead beginners

**12 Implementation Tips:**
Hints or advice for writing the function correctly and efficiently (e.g., which loop to use, edge handling)

**13 Reusability in Other Libft Functions:**
Whether this function can or should be reused in other parts of Libft

**14 Main Concepts Involved:**
Key programming concepts used in the function (e.g., pointers, loops, memory allocation)

**15 Software Engineering Tips:**
Best practices related to clean code, readability, maintainability, or testing relevant to this function

**The Functions in this File are:**

ft_atoi  
ft_bzero  
ft_calloc  
ft_isalnum  
ft_isalpha  
ft_isascii  
ft_isdigit  
ft_isprint  
ft_itoa  
ft_memchr  
ft_memcmp  
ft_memcpy  
ft_memmove  
ft_memset  
ft_putchar_fd  
ft_putendl_fd  
ft_putnbr_fd  
ft_putstr_fd  
ft_split 
ft_strchr  
ft_striteri  
ft_strjoin  
ft_strlcat  
ft_strlcpy  
ft_strlen  
ft_strmapi  
ft_strncmp  
ft_strnstr  
ft_strrchr  
ft_strtrim  
ft_strdup  
ft_substr  
ft_tolower  
ft_toupper  

And they can be segmented withing the following tags: 

**Memory Functions: [Use for memory manipulation]** 

ft_bzero – Write zeroes to memory  
ft_calloc – Allocate memory and initialize to zero  
ft_memchr – Search for a byte in memory  
ft_memcmp – Compare memory areas  
ft_memcpy – Copy memory area  
ft_memmove – Move memory (handles overlap)  
ft_memset – Fill memory with a constant byte  

**Character Checks & Conversions: [Checks for types or changes]**

Character Checks:  

ft_isalnum – Alphanumeric check  
ft_isalpha – Alphabetic check  
ft_isascii – ASCII check  
ft_isdigit – Digit check  
ft_isprint – Printable character check  

Character Conversions:  

ft_tolower – Convert uppercase to lowercase  
ft_toupper – Convert lowercase to uppercase  

**String Functions: [Manipulate and analyze strings]**  

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

**Conversions: [Number/string conversions]**  

ft_atoi – Convert string to int  
ft_itoa– Convert int to string  

**File Descriptor Output: [Output to a file descriptor]**  

ft_putchar_fd – Output a char  
ft_putstr_fd – Output a string  
ft_putendl_fd – Output a string + newline  
ft_putnbr_fd – Output an integer  
