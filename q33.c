//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;                  
        result = result + (remainder * remainder * remainder); 
        num = num / 10;                        
    }

    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}
//output
Enter a 3-digit number: 153
153 is an Armstrong number.
Enter a 3-digit number: 121
121 is NOT an Armstrong number.

