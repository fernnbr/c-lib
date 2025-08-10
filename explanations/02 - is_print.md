## How it originally works (C manual)

In <ctype.h>, isprint() checks whether a character is printable — meaning it has a visible representation (letters, digits, punctuation, space) and is not a control character.
ASCII printable range is 32 to 126 inclusive. (**It returns nonzero if printable, 0 if not**)

## Prototype 
**int ft_isprint(int c);**

## Difficulty Level
Beginner 

## How the function behaves
If the integer c corresponds to a printable ASCII character (space ' ' through tilde '~'), return true (1). Otherwise, return false (0). 

## Behavior Analogy (funny nickname + analogy)

Nickname: "The Fashion Police"
Analogy: Imagine a strict dress code party only guests with “visible” outfits 
(printable characters) are allowed in. Control characters 
like \n or \t are like invisible ninjas — they get kicked out at the door

## Parameters of the function
int c → The character code to check

## Expected Inputs

- Usually a char value cast to int
- Can be EOF (-1) or other values, but the function should safely handle them

## What is expected to return

Non-zero (true) → if printable (ASCII 32–126)
0 (false) → otherwise

## Use Cases 

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_isprint('A'));     // 1 (true)
    printf("%d\n", ft_isprint(' '));     // 1 (true, space is printable)
    printf("%d\n", ft_isprint(127));     // 0 (false, DEL is non-printable)
    printf("%d\n", ft_isprint('\n'));    // 0 (false, newline is control char)
}


## Output

1 , 1, 0, 0  

## Errors Management: What to comply with

1. Must handle EOF safely
2. Must avoid undefined behavior by not indexing arrays with invalid character codes
3. Always cast to unsigned char before comparison if range might exceed signed char

## Why it makes sense handling possible errors

Without checks for negative values or large integers, 
you could incorrectly classify characters or even risk memory issues in some implementations

## Gotchas

1) Space ' ' (ASCII 32) is printable according to the C standard
2) 127 (DEL) looks like a control character and is not printable
3) Printable ≠ visible on all fonts (some printable chars may look blank)
4) Casting to unsigned char avoids sign-extension issues

## Implementation Tips

- Keep checks in ascending order for readability: c >= 32 && c <= 126
- Explicitly reject out-of-range values first for robustness
- Using EOF check is optional if the function is only for Libft, but it’s a safe habit

- ## Recycle
Yes | Input sanitization before printing (ft_putstr_fd, ft_putchar_fd)

## Main Concepts Involved

- Character classification
- ASCII table knowledge
- Boundary checking
- Unsigned casting for safety

