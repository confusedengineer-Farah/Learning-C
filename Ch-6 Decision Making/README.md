# Ch-6 Decision Making

This folder contains examples demonstrating decision-making constructs in C.

## Files

- `if.c`: Demonstrates the basic `if` statement for conditional execution.
- `if_else.c`: Demonstrates the `if-else` statement for two-way conditional execution.
- `nested_if.c`: Demonstrates nested `if` statements for multiple levels of conditions.
- `ternary.c`: Demonstrates the ternary operator (`?:`) for concise conditional expressions.

## Usage

1. Compile a file with a C compiler:
   ```bash
   gcc if.c -o if
   ```
2. Run the executable:
   ```bash
   ./if
   ```

## Decision-Making Structures

### if Statement
Executes a block of code if a condition is true.

```c
if (condition) {
    // code to execute if condition is true
}
```

### if-else Statement
Executes one block if a condition is true, another if false.

```c
if (condition) {
    // code if condition is true
} else {
    // code if condition is false
}
```

### Nested if Statement
Uses `if` statements inside other `if` statements for complex conditions.

```c
if (condition1) {
    if (condition2) {
        // code if both conditions are true
    }
}
```

### Ternary Operator
A compact conditional expression that returns one of two values.

```c
condition ? value_if_true : value_if_false
```

Example:
```c
int result = (a > b) ? a : b;  // result gets the greater value
```

## Notes

- Always use braces `{}` for clarity, even for single-statement blocks.
- Conditions use relational operators: `==`, `!=`, `<`, `>`, `<=`, `>=`.
- Logical operators can combine conditions: `&&` (AND), `||` (OR), `!` (NOT).
