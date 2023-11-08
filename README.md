# Printf Project

This is the `printf` project by Omofomah David Joseph and Onyeozu Emmanuel.

## Project Overview

The `printf` function is used to produce output according to a format. This implementation writes the output to `stdout`, the standard output stream. The format string is composed of zero or more directives that control the formatting of the output.

## Authorized Functions and Macros

The `printf` project utilizes the following authorized functions and macros:
- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)

## Tasks

### Task 0: Basic Output
- Write a function that handles the following conversion specifiers:
  - `%c`: Character
  - `%s`: String
  - `%%`: Literal `%`

### Task 1: Integers
- Handle the following conversion specifiers:
  - `%d`: Signed Integer
  - `%i`: Signed Integer

### Task 2: Custom Binary Conversion
- Handle a custom conversion specifier:
  - `%b`: Binary

### Task 3: More Integer Formats
- Handle the following conversion specifiers:
  - `%u`: Unsigned Integer
  - `%o`: Octal
  - `%x`: Hexadecimal (lowercase)
  - `%X`: Hexadecimal (uppercase)

### Task 4: Local Buffer
- Use a local buffer of 1024 characters to call `write` as little as possible.

### Task 5: Custom String
- Handle a custom conversion specifier:
  - `%S`: Custom String

    - Non-printable characters (ASCII value < 32 or >= 127) are printed as `\x` followed by the ASCII code value in hexadecimal (always uppercase, always 2 characters).

### Task 6: Pointer Address
- Handle the following conversion specifier:
  - `%p`: Pointer Address

### Task 7: Flag Characters
- Handle the following flag characters for non-custom conversion specifiers:
  - `+`: Sign for positive values
  - `space`: Space for positive values
  - `#`: Alternative form (used with `o`, `x`, and `X`)

### Task 8: Length Modifiers
- Handle the following length modifiers for non-custom conversion specifiers:
  - `l`: Long
  - `h`: Short

### Task 9: Field Width
- Handle the field width for non-custom conversion specifiers.

### Task 10: Precision
- Handle the precision for non-custom conversion specifiers.

### Task 11: Zero Flag Character
- Handle the `0` flag character for non-custom conversion specifiers.

### Task 12: Minus Flag Character
- Handle the `-` flag character for non-custom conversion specifiers.

### Task 13: Custom Reverse String
- Handle a custom conversion specifier:
  - `%r`: Reversed String

### Task 14: Custom Rot13
- Handle a custom conversion specifier:
  - `%R`: Rot13'd String

### Task 15: Integration
- Make all the above options work together to provide a comprehensive `printf` implementation.

## Project Status

This `printf` project implements a wide range of formatting options and features. The tasks outlined above showcase the complete functionality of the `printf` implementation. This project aims to offer a versatile and reliable output formatting solution.

For more details on each task, please refer to the corresponding task files in the project directory.

## Usage

To use this `printf` implementation, include the `printf.c` file in your project and call the `ft_printf` function as needed to format and print output. Follow the standard `printf` format specifiers in your format strings.

**Example:**

```c
#include "printf.h"

int main() {
    ft_printf("Hello, %s! Your age is %d.\n", "John", 30);
    return 0;
}
```

## Feedback and Contributions

We welcome feedback, suggestions, and contributions to improve and extend the functionality of this `printf` implementation. Please feel free to submit issues, pull requests, or contact the project authors for any inquiries.

## Authors

- Omofomah David Joseph
- Onyeozu Emmanuel
