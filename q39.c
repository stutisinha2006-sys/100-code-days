//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 1) {
            product = product * digit;
        }
        num = num / 10;
    }

    printf("Product of odd digits is %d\n", product);
    return 0;
}
//output
Enter a number: 7
Product of odd digits is 7
Enter a number: 3
Product of odd digits is 3