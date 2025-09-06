//Write a program to input two numbers and display their sum, difference, product, and quotient.//
#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // To avoid division by zero
    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", difference);
        printf("Product = %d\n", product);
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", difference);
        printf("Product = %d\n", product);
        printf("Division by zero is not possible.\n");
    }

    return 0;
}
//output//
Enter first number: 23
Enter second number: 4
Sum = 27
Difference = 19
Product = 92
Quotient = 5.75
