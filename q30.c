//Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse logic
    while (num != 0) {
        remainder = num % 10;               
        reversed = reversed * 10 + remainder;
        num = num / 10;                    
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
//output
Enter a number: 12
Reversed number = 21
