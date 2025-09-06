//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.//
#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    // Input length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("Area of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);

    return 0;
}
//output//
Enter the length of the rectangle: 2
Enter the breadth of the rectangle: 5
Area of the rectangle = 10.00
Perimeter of the rectangle = 14.00