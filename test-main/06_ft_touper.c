How the original toupper works (manual definition)
In the C standard library, toupper(int c) converts a lowercase letter ('a'–'z') to its uppercase equivalent.
If c is not a lowercase letter, it simply returns c unchanged.

It's defined in <ctype.h> and requires c to be:

An unsigned char (0–255), or

EOF (-1)


Expected Return
Returns uppercase version of c if c is between 'a' and 'z'

Returns c unchanged if it's not a lowercase letter
