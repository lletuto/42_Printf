# ft_printf — École 42

> A reimplementation of the C standard printf function.

---

## Description

`ft_printf` replicates the behavior of the standard `printf`, parsing a format string and handling a variable number of arguments via variadic functions.

---

## Prototype

```c
int ft_printf(const char *format, ...);
```

- **Returns** the total number of characters printed
- **Returns** `-1` on error
- Handles a format string containing plain text and conversion specifiers starting with `%`

---

## Supported conversions

| Specifier | Description |
|---|---|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal |
| `%d` | Prints a decimal integer |
| `%i` | Prints an integer in base 10 |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints a number in lowercase hexadecimal |
| `%X` | Prints a number in uppercase hexadecimal |
| `%%` | Prints a literal `%` |

---

## Files

| File | Description |
|---|---|
| `ft_printf.c` | Core function and format parser |
| `ft_printf.h` | Header |
| `Makefile` | Build rules |

---

## How it works

`ft_printf` iterates through the format string character by character. When it encounters a `%`, it reads the next character to determine which conversion to apply, then calls the appropriate handler. A running character count is maintained and returned at the end.

Variadic arguments are accessed using the `va_list`, `va_start`, `va_arg`, and `va_end` macros from `<stdarg.h>`.

---

## Compilation

```bash
make
```

To use it in your own project:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft_printf
```

Or simply compile alongside your sources:

```bash
cc -Wall -Wextra -Werror main.c ft_printf.c ft_printf_utils.c
```

---

## Usage example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Decimal: %d | Hex: %x | Pointer: %p\n", 42, 255, &main);
    ft_printf("Percent sign: %%\n");
    return (0);
}
```

Output:
```
Hello, world!
Decimal: 42 | Hex: ff | Pointer: 0x...
Percent sign: %
```

---

## École 42

Project completed as part of the École 42 curriculum. No use of the real `printf` or any equivalent function. Built using only `write`, `malloc`, `free`, and variadic macros.
