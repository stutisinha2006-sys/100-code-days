//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    char bin[20];
    int i;

    printf("Enter binary number: ");
    scanf("%s", bin);

    printf("1's complement: ");
    for (i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '1')
            printf("0");
        else
            printf("1");
    }

    return 0;
}
//output
Enter binary number: 1010
1's complement: 0101
Enter binary number: 2020
1's complement: 1111