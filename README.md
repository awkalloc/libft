# Libft

## Introduction

Libft is a custom implementation of a subset of the C Standard Library. The goal of this project is to recreate commonly used C functions while gaining a deeper understanding of low-level programming concepts and memory management.

This library serves as a foundation for future projects, providing reusable utility functions that can be linked and used throughout the 42 curriculum.

---

## Main Learnings

During the development of this project, the following concepts were explored and reinforced:

### Pointers

* Understanding memory addresses and pointer manipulation.
* Passing variables by reference.
* Working with arrays and strings through pointers.

### Memory Management

* Dynamic memory allocation using `malloc`.
* Proper memory deallocation with `free`.
* Preventing memory leaks and invalid memory access.

### String Manipulation

* Recreating standard functions such as:

  * `strlen`
  * `strchr`
  * `strrchr`
  * `strncmp`
  * `strnstr`
  * `strlcpy`
  * `strlcat`

### Data Structures

* Creating and manipulating linked lists.
* Traversing, adding, deleting, and clearing list nodes.

### C Standard Library

* Understanding how common libc functions work internally.
* Reimplementing standard functions from scratch.
* Improving knowledge of function prototypes and library organization.

### Code Organization

* Creating reusable and modular code.
* Building a static library.
* Working with header files and source file separation.

---

## Project Structure

```text
libft/
├── includes/
│   └── libft.h
├── src/
│   ├── libc functions
│   ├── additional functions
│   └── linked list functions
├── Makefile
└── README.md
```

---

## Compilation

To compile the library, run:

```bash
make
```

This will generate:

```bash
libft.a
```

### Available Makefile Rules

Compile the mandatory part:

```bash
make
```

Remove object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Recompile everything:

```bash
make re
```

Compile the bonus part:

```bash
make bonus
```

---

## Usage

Include the header in your project:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c libft.a -I includes
```

Example:

```c
#include "libft.h"

int main(void)
{
    ft_putchar_fd('A', 1);
    return (0);
}
```
