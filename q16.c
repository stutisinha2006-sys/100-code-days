//Write a program to input three numbers and find the largest among them using if–else.//
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare using if–else
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %d\n", num2);
    } else {
        printf("The largest number is: %d\n", num3);
    }

    return 0;
}
//output//
Enter three numbers:
1 12 4
The largest number is: 12