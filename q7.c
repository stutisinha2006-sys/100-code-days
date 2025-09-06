//Write a program to swap two numbers without using a third variable.//
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Display before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap without third variable (using arithmetic)
    a = a + b;  
    b = a - b;  
    a = a - b;  

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
//output//
Enter first number: 6
Enter second number: 2

Before swapping: a = 6, b = 2
After swapping: a = 2, b = 6