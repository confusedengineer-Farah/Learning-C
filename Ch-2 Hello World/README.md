# Chapter 2: Hello World - Your First C Program

## Overview
This chapter introduces you to writing your first C program. The "Hello World" program is the traditional starting point for learning any programming language. It demonstrates the basic structure of a C program and introduces fundamental concepts.

## Basic Structure of a C Program

Every C program follows a standard structure:

```c
#include <stdio.h>  // Header file inclusion

int main() {        // Main function - program entry point
    // Code statements
    return 0;       // Return statement
}
```

## Key Components

### 1. Header Files
- `#include <stdio.h>` includes the Standard Input/Output header
- Provides access to functions like `printf()` and `scanf()`

### 2. Main Function
- `int main()` is the entry point of every C program
- Execution begins here
- Returns an integer value (0 typically indicates successful execution)

### 3. Printf Function
- `printf("Hello World!");` outputs text to the console
- Text must be enclosed in double quotes
- The semicolon `;` terminates the statement

### 4. Return Statement
- `return 0;` ends the main function
- Returns 0 to indicate successful program execution

## Comments in C

Comments are used to explain code and are ignored by the compiler. C supports two types of comments:

### Single-Line Comments
```c
// This is a single-line comment
printf("Hello"); // Comment after code
```

### Multi-Line Comments
```c
/* This is a multi-line comment
   that can span multiple lines
   and is useful for longer explanations */
```

## Files in This Chapter

- `hellow.c`: The classic "Hello World" program demonstrating basic C structure
- `comments.c`: Examples of both single-line and multi-line comments in C

## Running the Programs

To compile and run these programs:

1. Open a terminal/command prompt
2. Navigate to the chapter directory
3. Compile: `gcc hellow.c -o hellow`
4. Run: `./hellow`

Or for comments.c:
1. Compile: `gcc comments.c -o comments`
2. Run: `./comments`

## What You Learned

- Basic structure of a C program
- The main function and its importance
- Using printf() for output
- Including header files
- Writing comments to document code
- Compiling and running C programs

This foundation will be built upon in subsequent chapters as you learn more advanced C concepts.