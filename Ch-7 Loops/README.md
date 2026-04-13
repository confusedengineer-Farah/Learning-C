# Ch-7 Loops

This folder contains examples demonstrating loop constructs in C.

## Files

- `for.c`: Demonstrates the `for` loop for iterating a fixed number of times. Prints the first 10 natural numbers.
- `while.c`: Demonstrates the `while` loop for conditional iteration.
- `do_while.c`: Demonstrates the `do-while` loop, which executes at least once before checking the condition.
- `nested_loop.c`: Demonstrates nested loops. Finds and prints all prime numbers from 2 to 30.

## Usage

1. Compile a file with a C compiler:
   ```bash
   gcc for.c -o for
   ```
2. Run the executable:
   ```bash
   ./for
   ```

## Loop Types

### for Loop
Used when you know the number of iterations in advance.

```c
for (initialization; condition; increment) {
    // code to execute in each iteration
}
```

Example:
```c
for (i = 1; i <= 10; i++) {
    printf("%d\n", i);
}
```

### while Loop
Used when you need to repeat code while a condition is true.

```c
while (condition) {
    // code to execute while condition is true
    // must update variables to eventually make condition false
}
```

Example:
```c
int a = 10;
while (a < 20) {
    printf("value of a : %d\n", a);
    a++;
}
```

### do-while Loop
Similar to `while`, but the code block executes at least once before checking the condition.

```c
do {
    // code to execute at least once
} while (condition);
```

Example:
```c
int i = 1;
do {
    printf("%d\n", i);
    i++;
} while (i <= 10);
```

### Nested Loops
Loops within loops for multi-dimensional iteration.

```c
for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
        // code executes n * m times
    }
}
```

## Loop Control Statements

- `break`: Exits the loop immediately.
- `continue`: Skips the rest of the current iteration and moves to the next.

## Notes

- The `for` loop is typically used for known iteration counts.
- The `while` loop is best for unknown iteration counts.
- The `do-while` loop is useful when code must execute at least once.
- Always ensure loop conditions will eventually become false to avoid infinite loops.
