#include <stdio.h>

// Function to get user input

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("You entered: %d\n", num);

    // Add moere examples

    // 1. Simple calculator

    float num1, num2;
    
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    printf("Enter the second number: ");
    scanf("%f", &num2);
    
    // Addition
    float sum = num1 + num2;
    printf("Sum: %.2f\n", sum);
    
    // Subtraction
    float difference = num1 - num2;
    printf("Difference: %.2f\n", difference);
    
    // Multiplication
    float product = num1 * num2;
    printf("Product: %.2f\n", product);
    
    // Division
    if (num2 != 0) {
        float quotient = num1 / num2;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    
    return 0;
}

