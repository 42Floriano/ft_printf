# ft_printf

## Description
The `ft_printf` project is a simplified recreation of the `printf()` function from libc. The goal of this project is to understand the inner workings of this type of function, and to gain a deeper understanding of C programming, particularly variadic functions.

The `ft_printf` function has the following prototype: `int ft_printf(const char *, ...);`. It handles the following conversions: `cspdiuxX%`, and does not implement the buffer management of the original `printf()`. The function will be compared against the original `printf()`.

The `ft_printf` function supports the following conversions:
- `%c`: Prints a single character.
- `%s`: Prints a string (as defined by the common C convention).
- `%p`: The `void *` pointer argument is printed in hexadecimal format.
- `%d`: Prints a decimal (base 10) number.
- `%i`: Prints an integer in base 10.
- `%u`: Prints an unsigned decimal (base 10) number.
- `%x`: Prints a number in hexadecimal (base 16) lowercase format.
- `%X`: Prints a number in hexadecimal (base 16) uppercase format.
- `%%`: Prints a percent sign.

The `libftprintf.a` library is created at the root of the repository using the `ar` command.

## Installation
Simple use the makefile

## Usage
The `ft_printf` function works similarly to the `printf` function but in a simplified manner. It can be used in the same way as `printf`.
