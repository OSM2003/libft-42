
# libft

Small C library implementing a subset of standard libc functions and useful helpers for 42 school projects.

## Overview

This repository contains an implementation of common C functions typically required by the 42 curriculum. The goal is to provide a lightweight, well-documented static library (`libft.a`) that you can compile and link into your projects.

Project structure

- `libft/` - implementation (.c) files
- `headers/` - public header(s). Include `headers/libft.h` in your sources to access the prototypes.
- `Makefile` - build rules to create `libft.a` and manage object files

## Build

To build the static library, run:

```sh
make
```

This will produce `libft.a` in the repository root and place object files under `objs/`.

Useful make targets:

- `make` (or `make all`) - build `libft.a`
- `make clean` - remove object files
- `make fclean` - remove object files and `libft.a`
- `make re` - run `fclean` then `make`

## Usage

Include the header and link the static library when compiling your program.

Example:

```sh
gcc -Iheaders -L. -lft your_program.c -o your_program
```

Or compile and link explicitly against the archive:

```sh
gcc -Iheaders -c your_program.c
gcc -o your_program your_program.o libft.a
```

If you use the header as `#include "libft.h"`, make sure the compiler can find it with `-Iheaders` or by installing the header in a system include path.

## Implemented functions

The following functions are implemented in this library (one-to-one with their `libft/` source files):

- Character checks / transformations
	- `ft_isalnum`, `ft_isalpha`, `ft_isascii`, `ft_isdigit`, `ft_isprint`, `ft_tolower`, `ft_toupper`

- Memory
	- `ft_bzero`, `ft_calloc`, `ft_memchr`, `ft_memcmp`, `ft_memcpy`, `ft_memmove`, `ft_memset`

- String manipulation / inspection
	- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_strjoin`, `ft_strtrim`, `ft_substr`, `ft_split`, `ft_striteri`, `ft_strmapi`

- Conversions / utilities
	- `ft_atoi`, `ft_itoa`

- I/O helpers (file descriptor aware)
	- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

- Linked list helpers
	- `ft_lstnew`, `ft_lstadd_front`, `ft_lstlast`, `ft_lstsize`

Check the headers in `headers/libft.h` for function prototypes and expected types.

## Testing

Create a small `main.c` that includes `libft.h` and calls the functions you want to test. Example workflow:

```sh
gcc -Iheaders -c main.c
ar rcs libft.a objs/libft/*.o    # only needed if you modified sources but didn't run make
gcc main.o -L. -lft -o test
./test
```

For automated tests, consider writing unit tests and a Makefile target that builds and runs them.

## Style and contributions

This project follows the 42 school's coding standards (norm). Keep changes small, document behavior in the header, and add small, focused commits.

If you want to contribute, open a branch, add tests for new behavior, and submit a PR describing the change.

