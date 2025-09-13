//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, first, middle, last;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    first = num / 100;        
    middle = (num / 10) % 10;  
    last = num % 10;          

    int swapped = last * 100 + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
//output
Enter a 3-digit number: 245
Number after swapping first and last digit: 542