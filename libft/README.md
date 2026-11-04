*This project has been created as part of the 42 curriculum by haelkhad.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.

The main goal of this project is to recreate several standard C library functions and build additional utility functions.

Through this project, I learned and practiced fundamental C programming concepts, including:

- Memory management and allocation.
- Pointers and pointer manipulation.
- String manipulation.
- Working with arrays and memory blocks.
- Linked lists and data structures.
- Dynamic memory allocation and deallocation.

The library is designed to be reusable in future C projects.

## Instructions

### Compilation

To compile the library, clone the repository and enter the project directory:

```bash
git clone https://github.com/hassanel-rgb/hatane.CC.git
cd hatane.CC/libft.a
```

Compile the library using:

```bash
make
```

This generates the static library:

```text
libft.a
```

### Cleaning

Remove object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Recompile the library:

```bash
make re
```

### Using the library

Include the header file in your C program:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

Run the program:

```bash
./program
```

## Library Description

The library contains several groups of functions.

### 1. Character Checking Functions

Functions used to check character types:

- `ft_isalpha` – Checks whether a character is alphabetic.
- `ft_isdigit` – Checks whether a character is a digit.
- `ft_isalnum` – Checks whether a character is alphanumeric.
- `ft_isascii` – Checks whether a character belongs to the ASCII set.
- `ft_isprint` – Checks whether a character is printable.

### 2. String Functions

Functions used to manipulate strings:

- `ft_strlen` – Calculates the length of a string.
- `ft_strchr` – Finds the first occurrence of a character.
- `ft_strrchr` – Finds the last occurrence of a character.
- `ft_strlcpy` – Copies a string with size protection.
- `ft_strlcat` – Concatenates strings with size protection.
- `ft_toupper` – Converts a lowercase character to uppercase.
- `ft_tolower` – Converts an uppercase character to lowercase.
- `ft_strncmp` – Compares two strings.
- `ft_strnstr` – Searches for a substring.
- `ft_strdup` – Duplicates a string.

### 3. Memory Functions

Functions used to manipulate memory:

- `ft_memset` – Fills a memory area with a specific byte.
- `ft_bzero` – Sets a memory area to zero.
- `ft_memcpy` – Copies memory from one location to another.
- `ft_memmove` – Copies memory while handling overlapping areas.
- `ft_memchr` – Searches for a byte in memory.
- `ft_memcmp` – Compares two memory areas.
- `ft_calloc` – Allocates and initializes memory to zero.

### 4. Conversion and Utility Functions

- `ft_atoi` – Converts a string into an integer.
- `ft_substr` – Extracts a substring.
- `ft_strjoin` – Joins two strings.
- `ft_strtrim` – Removes specified characters from the beginning and end of a string.
- `ft_split` – Splits a string using a delimiter.
- `ft_itoa` – Converts an integer into a string.
- `ft_strmapi` – Applies a function to each character of a string.
- `ft_striteri` – Applies a function to each character using its index.
- `ft_putchar_fd` – Writes a character to a file descriptor.
- `ft_putstr_fd` – Writes a string to a file descriptor.
- `ft_putendl_fd` – Writes a string followed by a newline.
- `ft_putnbr_fd` – Writes an integer to a file descriptor.

### 5. Linked List Functions

Functions used to create and manipulate linked lists.

The library uses a linked list structure where each node contains a pointer to its content and a pointer to the next node.

- `ft_lstnew` – Creates a new list node.
- `ft_lstadd_front` – Adds a node at the beginning of a list.
- `ft_lstsize` – Counts the number of nodes.
- `ft_lstlast` – Returns the last node.
- `ft_lstadd_back` – Adds a node at the end of a list.
- `ft_lstdelone` – Deletes one node.
- `ft_lstclear` – Deletes an entire list.
- `ft_lstiter` – Applies a function to each node.
- `ft_lstmap` – Creates a new list by applying a function to each node's content.

## Resources

The following resources were useful during development:

- [C Programming Language Documentation](https://en.cppreference.com/w/c)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [GNU GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [42 School](https://42.fr/)

### AI Usage

AI tools were used as learning and development assistants during this project.

They helped with:

- Understanding C programming concepts, especially pointers and memory management.
- Explaining standard C library functions.
- Understanding linked lists and their operations.
- Debugging compilation errors and understanding unexpected behavior.
- Reviewing code logic and discussing possible edge cases.
- Understanding project requirements and documentation.

AI was used as a learning support tool. The implementation and testing of the functions were carried out as part of the learning process.

## Author

**haelkhad**