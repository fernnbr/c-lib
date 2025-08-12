/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:27:05 by sarahfer          #+#    #+#             */
/*   Updated: 2025/08/12 13:27:08 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* SEGMENT I - Memory Management */
/* calloc Allocates memory for an array and initializes it to zero */
void		*ft_calloc(size_t nmemb, size_t size);

/* memchr Allocates memory for an array and initializes it to zero */
void		*ft_memchr(const void *s, int c, size_t n);

/* memcpy Copies memory from source to destination */
void		*ft_memcpy(void *dest, const void *src, size_t n);

/* memmove Safely moves memory from source to destination and handles overlap */
void		*ft_memmove(void *dest, const void *src, size_t n);

/* memset Sets memory to a specific byte value */
void		*ft_memset(void *s, int c, size_t n);

/* bzero Fills memory with zero */
void		ft_bzero(void *s, size_t n);

/* SEGMENT II - Character Check and Conversion */
/* isalnum Checks if a character is alphanumeric */
int			ft_isalnum(int c);

/* isalpha Checks if a character is alphabetic */
int			ft_isalpha(int c);

/* isascii Checks if a character is ASCII */
int			ft_isascii(int c);

/* isdigit Checks if a character is a digit */
int			ft_isdigit(int c);

/* isprint Checks if a character is printable */
int			ft_isprint(int c);

/* tolower Converts a character to lowercase */
int			ft_tolower(int c);

/* toupper Converts a character to uppercase */
int			ft_toupper(int c);

/* SEGMENT III - Number/String Conversion */
/* atoi Converts a string to an integer */
int			ft_atoi(const char *nptr);

/* itoa Counts how many digits are in a number */
char		*ft_itoa(int n);

/* SEGMENT IV - String Handling - Basics */
/* strchr finds the first occurrence of a character in a string */
char		*ft_strchr(const char *s, int c);

/* strrchr Finds the last occurrence of a character in a string */
char		*ft_strrchr(const char *s, int c);

/* strlen Returns the length of a string */
size_t		ft_strlen(const char *s);

/* strncmp Compares two strings up to a given length */
int			ft_strncmp(const char *s1, const char *s2, size_t n);

/* strlcpy Copies a string with a size limit */
size_t		ft_strlcpy(char *dst, const char *src, size_t size);

/* strlcat Concatenates strings with a size limit */
size_t		ft_strlcat(char *dst, const char *src, size_t size);

/* strdup Duplicates a string */
char		*ft_strdup(const char *s);

/* strnstr Locates a substring within a string with a length limit */
char		*ft_strnstr(const char *big, const char *little, size_t len);

/* memcmp compares two memory blocks */
int			ft_memcmp(const void *s1, const void *s2, size_t n);

/* Segment V - String Manipulation Advanced */
/* substr extracts a part of a string from a starting position */
char		*ft_substr(const char *s, unsigned int start, size_t len);

/* strjoin Combines two strings into one */
char		*ft_strjoin(const char *s1, const char *s2);

/* strtrim removes specific characters from the start and end of a string */
char		*ft_strtrim(const char *s1, const char *set);

/* split counts words in a string separated by a specific character */
char		**ft_split(char const *s, char c);

/* strmapi Applies a function to each character of a string */
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* striteri Applies a function to each character of a string */
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

/* Segment VI - Output Functions */
/* putchar Writes a character to a file descriptor */
void		ft_putchar_fd(char c, int fd);

/* putendl Writes a string followed by a newline to a file descriptor */
void		ft_putendl_fd(char *s, int fd);

/* putnbr Writes an integer to a file descriptor */
void		ft_putnbr_fd(int n, int fd);

/* putstr Writes a string to a file descriptor */
void		ft_putstr_fd(char *s, int fd);

#endif
