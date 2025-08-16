// NAME of the library 
//[This is the static library that will be created from object files]

NAME = libft.a

// Compiler flags
FLAGS = -Wall -Wextra -Werror -I.

//Where: 

//-Wall: enable all common warnings
//-Wextra: enable extra warnings
//-Werror: treat warnings as errors
//-I. : include current directory (for headers like libft.h)

// Source files
//[List of all .c source files for the library]

SRC = ft_bzero.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_isdigit.c \
      ft_isprint.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_strchr.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_strlen.c \
      ft_strncmp.c \
      ft_strrchr.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_strnstr.c \
      ft_atoi.c \
      ft_calloc.c \
      ft_strdup.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_split.c \
      ft_itoa.c \
      ft_strmapi.c \
      ft_striteri.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c


// Object files 
// [replace .c with .o]

OBJS = $(SRC:%.c=%.o)

// Default target
// [Running 'make' will build the library]

all: $(NAME)

// Create the library from object files

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

// Where: (ar rcs)

// - r = insert/replace files
// - c = create archive if it doesn't exist
// - s = write an index for faster linking

// Generic rule to compile .c to .o

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

// Where: 

// - $< = first prerequisite (.c file)
// - $@ = target (.o file)

// Remove object files

clean:
	rm -f $(OBJS)

//  Where:

// rm → remove files

// -f → force removal
// (meaning do not prompt for confirmation; do not show errors if the file doesn’t exist)

// Remove object files and library
    
fclean: clean
	rm -f $(NAME)

// Rebuild everything
re: fclean all

// Declare phony targets (not actual files)
.PHONY: all clean fclean re

// Which means: 
// Make normally checks if a target file exists 
// If it exists, it might skip the command

// By marking it .PHONY, make knows:
// “Always run this target, don’t check for a file named like this.”

Because "all clean fclean re" are "different commands" to interact with the makefile

