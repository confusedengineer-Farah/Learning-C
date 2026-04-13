# Ch-4 Input Output

This folder contains examples for basic input and output in C.

Files:

- `user_input.c`: demonstrates reading integer and floating-point values from the user using `scanf`, then performs simple arithmetic operations and prints results.
- `scanf.c`: notes and examples for using `scanf` format specifiers, including character set scans such as `%[^\n]`.

Usage:

1. Compile a file with a C compiler, for example:
   ```bash
   gcc user_input.c -o user_input
   ```
2. Run the executable:
   ```bash
   ./user_input
   ```

Notes:

- Always validate input when using `scanf`.
- `scanf` can read formatted text, but be careful with buffer sizes and newline handling.
