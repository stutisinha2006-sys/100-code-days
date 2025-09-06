//Write a program to convert temperature from Celsius to Fahrenheit.//
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9/5) + 32;

    // Display result
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
//output//
Enter temperature in Celsius: 39
39.00 Celsius = 102.20 Fahrenheit


