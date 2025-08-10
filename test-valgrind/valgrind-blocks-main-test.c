#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for size_t

int main(void)
{
    /* ---------- BLOCK 01: Allocation Functions ---------- */
    char *s1, *s2, *s3, *s4, *s5, *s6, *s7, *s8;
    char **split;

    // ft_calloc
    char *calloc_test = ft_calloc(5, sizeof(char));
    free(calloc_test);

    // ft_itoa
    s1 = ft_itoa(-12345);
    free(s1);

    // ft_split
    split = ft_split("one two three", ' ');
    for (int i = 0; split[i]; i++)
        free(split[i]);
    free(split);

    // ft_strjoin
    s2 = ft_strjoin("Hello, ", "World!");
    free(s2);

    // ft_strmapi
    s3 = ft_strmapi("abcd", [](unsigned int i, char c){ return c + i; });
    free(s3);

    // ft_strtrim
    s4 = ft_strtrim("   hello   ", " ");
    free(s4);

    // ft_strdup
    s5 = ft_strdup("Copy me");
    free(s5);

    // ft_substr
    s6 = ft_substr("Substring test", 3, 6);
    free(s6);

    /* ---------- BLOCK 02: Memory Manipulation Functions ---------- */
    char buf1[20], buf2[20];
    const char *haystack = "Find the needle in haystack";
    const char *needle = "needle";

    ft_bzero(buf1, sizeof(buf1));
    ft_memset(buf1, 'A', 5);
    ft_memcpy(buf2, buf1, 5);
    ft_memmove(buf2 + 2, buf1, 5);
    ft_memchr(buf1, 'A', sizeof(buf1));
    ft_memcmp(buf1, buf2, sizeof(buf1));

    ft_strchr("abcabc", 'b');
    ft_strrchr("abcabc", 'b');
    ft_strlcpy(buf1, "Hello", sizeof(buf1));
    ft_strlcat(buf1, " World", sizeof(buf1));
    ft_strlen("length");
    ft_strncmp("abc", "abd", 3);
    ft_strnstr(haystack, needle, strlen(haystack));

    ft_striteri(buf1, [](unsigned int i, char *c){ *c = *c + 1; });

    printf("All tests ran.\n");
    return 0;
}


//Bash

//gcc -Wall -Wextra -Werror main.c libft.a -o test
//valgrind --leak-check=full ./test

	
