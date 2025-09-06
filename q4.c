//Write a program to calculate the area and circumference of a circle given its radius.//
#include <stdio.h>
#define PI 3.1416   // Defining constant value of π

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
//output//
Enter the radius of the circle: 4
Area of the circle = 50.27
Circumference of the circle = 25.13

