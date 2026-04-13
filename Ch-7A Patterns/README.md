# Ch-7A Patterns

This folder contains examples demonstrating how to print various patterns using nested loops in C.

## Files

- `patterns.c`: Contains multiple pattern examples using nested loops, including number patterns, star patterns, and character patterns.

## Usage

1. Compile the file:
   ```bash
   gcc patterns.c -o patterns
   ```
2. Run the executable:
   ```bash
   ./patterns
   ```

## Patterns Included

### 1. Number Sequence Pattern
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```
Prints numbers 1 to i in each row i.

### 2. Repeated Number Pattern
```
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
```
Prints the row number i, repeated i times.

### 3. Calculated Number Pattern
```
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```
Prints numbers calculated using a formula in each row.

### 4. Rectangle Pattern
```
*
*
*
*
*
```
Prints a rectangle of asterisks. Each row has multiple asterisks.

### 5. Right Triangle Pattern
```
*
**
***
****
*****
```
Prints a right triangle where row i contains i asterisks.

### 6. Inverted Triangle Pattern
```
*****
****
***
**
*
```
Prints an inverted triangle where row i contains decreasing asterisks.

### 7. Alphabet Pattern
```
A
A B
A B C
A B C D
A B C D E
```
Prints alphabets starting from 'A', with row i containing i letters.

## Key Concepts

- **Nested Loops**: The outer loop controls rows, the inner loop controls columns.
- **Loop Variables**: Outer loop variable (i) often determines the number of iterations in the inner loop.
- **String/Character Printing**: Use `printf` to print characters and numbers in each position.
- **Line Breaks**: Use `printf("\n")` after the inner loop to move to the next row.

## Example Structure

```c
for (i = 1; i <= 5; i++) {           // outer loop: rows
    for (j = 1; j <= i; j++) {       // inner loop: columns
        printf("%d ", j);            // print element
    }
    printf("\n");                    // new line after each row
}
```

## Tips

- Modify loop ranges to create larger or smaller patterns.
- Experiment with different print statements to create new patterns.
- Combine nested loops with conditional statements for more complex patterns.
