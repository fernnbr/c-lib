#include "libft.h"

int ft_isalpha(int c)
{
    if (c == EOF)
        return (0);
    if (c < 0 || c > 255)
        return (0);
  
    c = (unsigned char)c;
  
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);

    return (0);
}
