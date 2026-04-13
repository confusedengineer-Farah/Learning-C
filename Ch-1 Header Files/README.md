# Chapter 1: Header Files in C

## Overview
Header files in C are files with a `.h` extension that contain function declarations, macro definitions, and other declarations that can be shared across multiple source files. They allow you to separate interface from implementation, making your code more modular and maintainable.

## Why Use Header Files?
- **Code Reusability**: Declare functions and variables once and use them in multiple files
- **Modularity**: Separate interface (declarations) from implementation (definitions)
- **Organization**: Keep related declarations together
- **Avoid Multiple Definitions**: Prevent linker errors from duplicate definitions

## How to Include Header Files
Use the `#include` preprocessor directive:

```c
#include <stdio.h>    // For system header files (angle brackets)
#include "myheader.h" // For user-defined header files (double quotes)
```

## Common Standard Header Files
- `<stdio.h>`: Standard Input/Output functions (printf, scanf, etc.)
- `<stdlib.h>`: General utilities (malloc, free, atoi, etc.)
- `<string.h>`: String manipulation functions (strcpy, strlen, etc.)
- `<math.h>`: Mathematical functions (sin, cos, sqrt, etc.)
- `<ctype.h>`: Character type functions (isalpha, isdigit, etc.)
- `<time.h>`: Time and date functions

## Creating Your Own Header Files
1. Create a `.h` file with function declarations
2. Use include guards to prevent multiple inclusions:

```c
#ifndef MYHEADER_H
#define MYHEADER_H

// Function declarations
void myFunction(int param);

#endif // MYHEADER_H
```

3. Include the header in your source files
4. Implement the functions in corresponding `.c` files

## Files in This Chapter
- `header_files.c`: Example demonstrating header file inclusion
- `reserved_keywords.md`: Information about C reserved keywords
- `C Keywords and Identifiers.pdf`: Additional reference material

## Example Usage
See `header_files.c` for a basic example of including and using standard header files in a C program.