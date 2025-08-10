## How it originally works (C manual)

In the C standard library (<ctype.h>), isascii() checks whether an integer value corresponds to a valid ASCII character code (0 to 127 inclusive)
It’s often used to validate that a character is within the basic ASCII set before doing operations that assume ASCII encoding
If the value is between 0 and 127, it returns a nonzero value (true). Otherwise, it returns 0 (false)

## Prototype
int ft_isascii(int c);

## Difficulty Level
Begginer 

## How the function behaves
It returns true if c is between 0 and 127, and 0, false, otherwise

## Behavior Analogy
Nickname: "The ASCII Vigilant"
Analogy: Imagine a club that only admits ASCII characters ft_isascii is the bouncer at the door checking if the guest’s ID (number) 
is between 0 and 127. If yes “you may enter”, otherwise  “sorry, not on the list”

## Parameters of the function
int c (the character code to check (can be a char promoted to int))

## Expected Inputs
Any integer (often the result of casting a char or unsigned char to int)

## What is expected to return

Non-zero (true): if c is between 0 and 127.
0 (false): otherwise

## Test Applications

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_isascii('A'));     // 1 (true)
    printf("%d\n", ft_isascii(127));     // 1 (true)
    printf("%d\n", ft_isascii(200));     // 0 (false)
    printf("%d\n", ft_isascii(-5));      // 0 (false)
}

## Errors Management: What to comply with

1) Follow the exact comparison range: 0 <= c <= 127
2) Return only 0 or non-zero values no other meaning
3) Don’t assume char type is signed or unsigned always work on int

## Why it makes sense handling possible errors

If you pass non-ASCII values into code expecting ASCII (e.g., for printing), 
you might print garbage, cause undefined behavior in some environments, or break encoding expectations

## Gotchas

1) Negative values can appear if char is signed by default and you don’t cast it
2) Extended ASCII values (128–255) are not valid ASCII — they’re from other encodings (e.g., Latin-1)
3) In original isascii(), any non-zero return is “true” — it doesn’t have to be 1

## Implementation Tips

1) Simple logical AND (&&) works fine
2) No need for loops or advanced logic (just compare boundaries)
3) Keep it inline-friendly for optimization

## Possible to Recycle / Recall?

YES | 
Input validation in other Libft functions like: 
**ft_isprint, ft_isalpha**
(to ensure you’re only checking ASCII codes)

## Main Concepts Involved

Integer comparison
Character encoding basics
Return of boolean-like values in C

## Software Engineering Tips

If multiple functions share the same “range check” pattern, centralize them for maintainability
Use descriptive names (ft_isascii) so code remains self-documenting
Keep consistent boolean convention (0 for false, non-zero for true)
