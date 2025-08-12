#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// Helper function for ft_striteri test
void ft_uppercase(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

// Helper function for ft_strmapi - adds index to each char
static char map_func(unsigned int i, char c)
{
    return (char)(c + i);
}

int main(void)
{
    char *str;
    char **split_res;
    int i;

    // ft_atoi
    printf("ft_atoi(\"  -1234abc\"): %d\n", ft_atoi("  -1234abc"));

    // ft_bzero
    char bzero_buf[10] = "abcdefghij";
    ft_bzero(bzero_buf, 5);
    printf("ft_bzero first 5 chars: %.5s\n", bzero_buf);

    // ft_calloc
    char *calloc_buf = ft_calloc(10, sizeof(char));
    if (!calloc_buf)
        return 1;
    printf("ft_calloc zeroed first char: %d\n", calloc_buf[0]);
    free(calloc_buf);

    // ft_isalnum
    printf("ft_isalnum('a'): %d\n", ft_isalnum('a'));
    printf("ft_isalnum('1'): %d\n", ft_isalnum('1'));
    printf("ft_isalnum('$'): %d\n", ft_isalnum('$'));

    // ft_isalpha
    printf("ft_isalpha('z'): %d\n", ft_isalpha('z'));
    printf("ft_isalpha('9'): %d\n", ft_isalpha('9'));

    // ft_isascii
    printf("ft_isascii(127): %d\n", ft_isascii(127));
    printf("ft_isascii(200): %d\n", ft_isascii(200));

    // ft_isdigit
    printf("ft_isdigit('8'): %d\n", ft_isdigit('8'));
    printf("ft_isdigit('a'): %d\n", ft_isdigit('a'));

    // ft_isprint
    printf("ft_isprint(' '): %d\n", ft_isprint(' '));
    printf("ft_isprint('\\n'): %d\n", ft_isprint('\n'));

    // ft_itoa
    str = ft_itoa(-42);
    if (!str)
        return 1;
    printf("ft_itoa(-42): %s\n", str);
    free(str);

    // ft_memchr
    char mem_buf[] = {1, 2, 3, 4, 5};
    printf("ft_memchr(mem_buf, 3, 5): %p\n", ft_memchr(mem_buf, 3, 5));

    // ft_memcmp
    char mem1[] = "abc";
    char mem2[] = "abd";
    printf("ft_memcmp(mem1, mem2, 3): %d\n", ft_memcmp(mem1, mem2, 3));

    // ft_memcpy
    char dest[10];
    ft_memcpy(dest, "hello", 6);
    printf("ft_memcpy dest: %s\n", dest);

    // ft_memmove
    char move_buf[20] = "memmove example";
    ft_memmove(move_buf + 2, move_buf, 7);
    printf("ft_memmove result: %s\n", move_buf);

    // ft_memset
    ft_memset(dest, 'A', 5);
    dest[5] = '\0';
    printf("ft_memset dest: %s\n", dest);

    // ft_putchar_fd, ft_putendl_fd, ft_putnbr_fd, ft_putstr_fd
    ft_putchar_fd('X', 1);
    ft_putchar_fd('\n', 1);
    ft_putendl_fd("ft_putendl_fd test", 1);
    ft_putnbr_fd(123456, 1);
    ft_putchar_fd('\n', 1);
    ft_putstr_fd("ft_putstr_fd test\n", 1);

    // ft_split
    split_res = ft_split("one two three", ' ');
    if (!split_res)
        return 1;
    for (i = 0; split_res[i]; i++)
    {
        printf("ft_split[%d]: %s\n", i, split_res[i]);
        free(split_res[i]);
    }
    free(split_res);

    // ft_strchr
    printf("ft_strchr(\"abc\", 'b'): %s\n", ft_strchr("abc", 'b'));

    // ft_striteri
    char iter_str[] = "hello";
    ft_striteri(iter_str, ft_uppercase);
    printf("ft_striteri uppercase: %s\n", iter_str);

    // ft_strjoin
    str = ft_strjoin("Hello, ", "world!");
    if (!str)
        return 1;
    printf("ft_strjoin: %s\n", str);
    free(str);

    // ft_strlcat
    char cat_buf[20] = "Hello";
    size_t res = ft_strlcat(cat_buf, " World", sizeof(cat_buf));
    printf("ft_strlcat result: %zu, buffer: %s\n", res, cat_buf);

    // ft_strlcpy
    char cpy_buf[20];
    res = ft_strlcpy(cpy_buf, "Copy me", sizeof(cpy_buf));
    printf("ft_strlcpy result: %zu, buffer: %s\n", res, cpy_buf);

    // ft_strlen
    printf("ft_strlen(\"test\"): %zu\n", ft_strlen("test"));

    // ft_strmapi
    str = ft_strmapi("abcd", map_func);
    if (!str)
        return 1;
    printf("ft_strmapi: %s\n", str);
    free(str);

    // ft_strncmp
    printf("ft_strncmp(\"abc\", \"abd\", 3): %d\n", ft_strncmp("abc", "abd", 3));

    // ft_strnstr
    printf("ft_strnstr(\"hello world\", \"world\", 11): %s\n", ft_strnstr("hello world", "world", 11));

    // ft_strrchr
    printf("ft_strrchr(\"abcabc\", 'b'): %s\n", ft_strrchr("abcabc", 'b'));

    // ft_strtrim
    str = ft_strtrim("   trim me   ", " ");
    if (!str)
        return 1;
    printf("ft_strtrim: '%s'\n", str);
    free(str);

    // ft_strdup
    str = ft_strdup("Duplicate me");
    if (!str)
        return 1;
    printf("ft_strdup: %s\n", str);
    free(str);

    // ft_substr
    str = ft_substr("Substring example", 3, 6);
    if (!str)
        return 1;
    printf("ft_substr: %s\n", str);
    free(str);

    // ft_tolower, ft_toupper
    printf("ft_tolower('A'): %c\n", ft_tolower('A'));
    printf("ft_toupper('a'): %c\n", ft_toupper('a'));

    return 0;
}

