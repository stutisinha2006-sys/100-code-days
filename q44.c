//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.//
#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);
    int numerator = 1, denominator = 2;

    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}

//output//
Enter number of terms (n): 18
Sum of the series up to 18 terms = 16.25
Enter number of terms (n): 9
Sum of the series up to 9 terms = 7.59s
