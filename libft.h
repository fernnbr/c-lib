/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarahfer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:25:34 by sarahfer          #+#    #+#             */
/*   Updated: 2024/11/07 21:41:28 by sarahfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

// Calloc Allocates memory for an array and initializes it to zero
void		*ft_calloc(size_t nmemb, size_t size);

//Memchr Allocates memory for an array and initializes it to zero
void		*ft_memchr(const void *s, int c, size_t n);

// Memcpy Copies memory from source to destination
void		*ft_memcpy(void *dest, const void *src, size_t n);

// Memmove Safely moves memory from source to destination (handles overlap)
void		*ft_memmove(void *dest, const void *src, size_t n);

// Memset Sets memory to a specific byte value
void		*ft_memset(void *s, int c, size_t n);

//02 String Manipulation Functions

// Atoi Converts a string to an integer
int			ft_atoi(const char *nptr);

// Isalnum Checks if a character is alphanumeric
int			ft_isalnum(int c);

// Isalpha Checks if a character is alphabetic
int			ft_isalpha(int c);

// Isascii Checks if a character is ASCII
int			ft_isascii(int c);

// Isdigit Checks if a character is a digit
int			ft_isdigit(int c);

// Isprint Checks if a character is printable
int			ft_isprint(int c);

// Memcmp Compares two memory blocks
int			ft_memcmp(const void *s1, const void *s2, size_t n);

// Strncmp Compares two strings up to a given length
int			ft_strncmp(const char *s1, const char *s2, size_t n);

// Tolower Converts a character to lowercase
int			ft_tolower(int c);

// ToUpper Converts a character to uppercase
int			ft_toupper(int c);

// Strchr finds the first occurrence of a character in a string
char		*ft_strchr(const char *s, int c);

// Strlcat Concatenates strings with a size limit
size_t		ft_strlcat(char *dst, const char *src, size_t size);

// Strlcpy Copies a string with a size limit
size_t		ft_strlcpy(char *dst, const char *src, size_t size);

// Strlen Returns the length of a string
size_t		ft_strlen(const char *s);

// Strdup Duplicates a string
char		*ft_strdup(const char *s);

// Strmapi Applies a function to each character of a string
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// Strnstr Locates a substring within a string with a length limit
char		*ft_strnstr(const char *big, const char *little, size_t len);

// Strrchr Finds the last occurrence of a character in a string
char		*ft_strrchr(const char *s, int c);

// Bzero Fills memory with zero
void		ft_bzero(void *s, size_t n);

// Putchar Writes a character to a file descriptor
void		ft_putchar_fd(char c, int fd);

// Putendl Writes a string followed by a newline to a file descriptor
void		ft_putendl_fd(char *s, int fd);

// Putnbr Writes an integer to a file descriptor
void		ft_putnbr_fd(int n, int fd);

// Putstr Writes a string to a file descriptor
void		ft_putstr_fd(char *s, int fd);

// Striteri Applies a function to each character of a string 
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

//Substr Extracts a part of a string from a starting position 
char		*ft_substr(const char *s, unsigned int start, size_t len);

//Strjoin Combines two strings into one
char		*ft_strjoin(const char *s1, const char *s2);

//Removes specific characters from the start and end of a string
char		*ft_strtrim(const char *s1, const char *set);

//Counts words in a string separated by a specific character
char		**ft_split(char const *s, char c);

//Counts how many digits are in a number
char		*ft_itoa(int n);

#endif
