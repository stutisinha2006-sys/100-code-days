//Write a program to find the roots of a quadratic equation and categorize them.//
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;  // Discriminant

    if (d > 0) {
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", (-b + sqrt(d)) / (2 * a));
        printf("Root 2 = %.2f\n", (-b - sqrt(d)) / (2 * a));
    } else if (d == 0) {
        printf("Roots are real and equal.\n");
        printf("Root = %.2f\n", -b / (2 * a));
    } else {
        printf("Roots are complex and imaginary.\n");
        printf("Root 1 = %.2f + %.2fi\n", -b / (2 * a), sqrt(-d) / (2 * a));
        printf("Root 2 = %.2f - %.2fi\n", -b / (2 * a), sqrt(-d) / (2 * a));
    }

    return 0;
}
//output//
Enter coefficients a, b, and c: 2 4 7
Roots are complex and imaginary.
Root 1 = -1.00 + 1.58i
Root 2 = -1.00 - 1.58i