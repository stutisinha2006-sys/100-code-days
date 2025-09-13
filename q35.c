//Write a program to print all factors of a given number.
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are:\n", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
//output
Enter a number: 4
Factors of 4 are:
1
2
4
