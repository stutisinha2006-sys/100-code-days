//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d = %d\n", n, fact);

    return 0;
}
//output
Enter a number: 4
Factorial of 4 = 24

