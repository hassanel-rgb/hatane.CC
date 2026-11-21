
*This project has been created as part of the 42 curriculum by haelkhad.*

# ft_printf

## Description

The **ft_printf** project is part of the 42 School curriculum. Its goal is to recreate the behavior of the standard C `printf()` function.

The project focuses on learning variadic functions in C using `va_list`, `va_start`, `va_arg`, and `va_end`.

The main objective is to parse a format string, identify conversion specifiers, retrieve the corresponding arguments, and print the formatted output to the standard output using the `write()` function.

### Supported Conversions

| Specifier | Description |
|-----------|-------------|
| `%c` | Prints a single character. |
| `%s` | Prints a string. |
| `%p` | Prints a pointer address in hexadecimal format. |
| `%d` | Prints a signed decimal integer. |
| `%i` | Prints an integer in decimal format. |
| `%u` | Prints an unsigned decimal integer. |
| `%x` | Prints a hexadecimal number in lowercase. |
| `%X` | Prints a hexadecimal number in uppercase. |
| `%%` | Prints a percent sign. |

## Instructions

### Compilation

Compile the project using the Makefile:

```bash
make
```

This generates the static library `libftprintf.a`.

### Makefile Rules

| Command | Description |
|---------|-------------|
| `make` | Compiles the library. |
| `make clean` | Removes object files. |
| `make fclean` | Removes object files and the library. |
| `make re` | Recompiles the project. |

### Usage

Include the project header in your C program:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "42", 42);
    return (0);
}
```

Compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o program
```

Execute it:

```bash
./program
```

## Algorithm and Data Structures

### 1. Format String Parsing

The main function `ft_printf()` iterates through the format string character by character.

- If the current character is not `%`, it is printed directly using `ft_print_char()`.
- If a `%` character is encountered, the next character is checked to identify the conversion specifier.
- The `ft_format()` function determines which printing function should handle the argument.
- The corresponding function retrieves the argument using `va_arg()` and prints it.
- The total number of printed characters is accumulated and returned.

### 2. Number Conversion Algorithm

The decimal and hexadecimal printing functions use recursion.

**Decimal conversion:**

The number is divided by 10 until it reaches its most significant digit. The recursive calls then print the digits in the correct order.

**Hexadecimal conversion:**

The same recursive approach is used, but the number is divided by 16. A hexadecimal character set is used to select the correct digit.

This approach allows numbers to be printed without requiring an additional array to reverse their digits.

### 3. Data Structures

The project uses simple C data types and standard variadic argument handling:

- `va_list`: Stores and accesses the variable arguments passed to `ft_printf()`.
- `char *`: Used to access format strings and hexadecimal character sets.
- `int`: Used for signed values and character counting.
- `unsigned int`: Used for unsigned decimal and hexadecimal conversions.
- `unsigned long`: Used for hexadecimal number conversion and pointer representation.

No complex data structures are required because the project mainly relies on sequential parsing and recursive conversion.

## Resources

### Documentation

- [printf() Manual](https://man7.org/linux/man-pages/man3/printf.3.html)
- [C Variadic Functions - stdarg.h](https://en.cppreference.com/w/c/variadic.html)
- [write() Manual](https://man7.org/linux/man-pages/man2/write.2.html)
- [C Reference](https://en.cppreference.com/w/c.html)
- [42 School](https://42.fr/)

### AI Usage

AI tools were used as a learning and assistance resource during this project.

They were used for:

- Understanding variadic functions and format specifiers.
- Reviewing code formatting and Norminette conventions.
- Identifying edge cases and preparing test scenarios.
- Understanding potential errors and improving code readability.
- Structuring and documenting the README file.

AI assistance was used for explanations, suggestions, and code review. The implementation, testing, and final code decisions were carried out by the student.

## Algorithm and Data Structures

### Chosen Algorithm: Linear Format Parsing & Recursive Base Conversion
The program processes the format string using a **single-pass linear scan** from left to right (`O(n)` time relative to the format string length `n`), paired with **recursive base division** for numeric and pointer conversions (`O(log_b(k))` calls, where `b` is base `10` or `16`).

- **Format string scan:** Non-`%` characters are written directly via `write()`, while `%` triggers specifier lookup and argument retrieval through `va_arg()`.
- **Recursive number conversion:** Values are divided by `10` or `16` down to the base case and printed during recursion unwinding so digits appear in most-significant-to-least-significant order without reversing an array.

**Justification:** Variadic arguments must be consumed sequentially in the exact order they appear in the format string, making a single-pass scan natural, direct, and easy to maintain under the 42 Norm. Recursive base conversion avoids allocating temporary digit buffers or performing manual reversal, while call depth stays tiny (at most ~10 levels for 32-bit integers and ~16 for 64-bit pointers). The trade-off is minor call-frame overhead per digit compared to an iterative buffer, which is negligible for `write()`-bound formatting.

### Chosen Data Structure: Primitive C Types & `va_list`
Rather than complex structures (such as linked lists, trees, or hash tables), the implementation uses primitive types (`int`, `unsigned int`, `unsigned long`, `char *`) alongside `va_list` from `<stdarg.h>`.

- `va_list` manages sequential access to variadic arguments.
- `char *` points to the format string and hexadecimal base lookup strings.
- `int`, `unsigned int`, and `unsigned long` represent signed/unsigned integers, counts, and addresses accurately.

**Justification:** `ft_printf` streams output immediately without storing a dynamic collection of elements to search, sort, or resize later. Relying on stack values and `va_list` instead of heap-allocated data structures keeps memory usage minimal and avoids memory-leak risks.
