//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);   // ith odd number = 2*i - 1
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
//output
Enter the value of n: 3
Sum of first 3 odd numbers = 9