//write a program to classify a triangle as equilateral, isosceles or scalene based on its side lengths
#include <stdio.h>
int main() {
    float a, b, c;

    // Input the three sides of the triangle
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if the given sides can form a triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        } 
        else {
            printf("The triangle is Scalene.\n");
        }
    } 
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
//output 
Enter the three sides of the triangle: 2 2 2
The triangle is Equilateral.
Enter the three sides of the triangle: 4 4 2
The triangle is Isosceles.

