# Chapter 3: Variables in C

## Overview
Variables are fundamental building blocks in C programming. They are named memory locations that store data values that can be modified during program execution. This chapter covers variable declaration, initialization, data types, and scope.

## What are Variables?
- Named memory locations that store data
- Can hold different types of values (integers, floats, characters, etc.)
- Values can be changed during program execution
- Must be declared before use

## Variable Declaration vs Definition

### Declaration
- Tells the compiler about variable name and type
- Does not allocate memory
- Can be done multiple times
- Example: `extern int a, b;`

### Definition
- Allocates memory for the variable
- Can include initialization
- Should be done only once
- Example: `int a, b;`

## Data Types in C

C provides several built-in data types:

### Integer Types
- `int`: Basic integer (typically 4 bytes)
- `short`: Short integer (typically 2 bytes)
- `long`: Long integer (typically 4 or 8 bytes)
- `char`: Single character (1 byte)

### Floating-Point Types
- `float`: Single-precision floating point (4 bytes)
- `double`: Double-precision floating point (8 bytes)

### Other Types
- `void`: Represents absence of type

## Variable Initialization
Variables can be initialized at the time of declaration:

```c
int a = 10;        // Initialize with value
int b = 20;
float f = 70.0/3.0; // Initialize with expression
```

## Variable Scope

### Local Variables
- Declared inside functions
- Only accessible within that function
- Memory allocated on stack

### Global Variables
- Declared outside all functions
- Accessible throughout the program
- Memory allocated in data segment

## Constants and Literals

### Constants
- Values that cannot be changed during execution
- Declared using `const` keyword
- Example: `const int MAX_VALUE = 100;`

### Literals
- Fixed values written directly in code
- Integer literals: `10`, `20`, `0x1A`
- Floating literals: `3.14`, `2.5e-3`
- Character literals: `'A'`, `'\n'`
- String literals: `"Hello World"`

## Files in This Chapter

- `variables.c`: Example demonstrating variable declaration, definition, and initialization
- `constant.c`: Example showing how to use constants with the `const` keyword
- `C Data Types.pdf`: Detailed reference on C data types
- `C Variables, Constants and Literals.pdf`: Comprehensive guide on variables and constants

## Example Code Analysis

### variables.c
The `variables.c` file demonstrates:

1. **External Declaration**: `extern int a, b;` declares variables without defining them
2. **Local Definition**: `int a, b;` inside main() defines and allocates memory
3. **Initialization**: `a = 10; b = 20;` assigns values to variables
4. **Operations**: `c = a + b;` performs arithmetic operations
5. **Output**: Uses `printf()` to display results with format specifiers

### constant.c
The `constant.c` file demonstrates the use of constants:

1. **Constant Declaration**: `const int LENGTH = 10;` declares integer constants
2. **Character Constants**: `const char NEWLINE = '\n';` shows character constants
3. **Using Constants**: `area = LENGTH * WIDTH;` uses constants in calculations
4. **Output**: Demonstrates printing constants and special characters

## Format Specifiers
- `%d`: Integer
- `%f`: Float/Double
- `%c`: Character
- `%s`: String

## Best Practices
- Always initialize variables before use
- Use meaningful variable names
- Choose appropriate data types for efficiency
- Declare variables at the beginning of functions (in older C standards)
- Use `const` for values that shouldn't change

## Common Mistakes
- Using uninitialized variables (garbage values)
- Type mismatches in assignments
- Exceeding variable scope
- Case sensitivity issues

This chapter provides the foundation for understanding data storage and manipulation in C programs.