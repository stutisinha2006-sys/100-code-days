//Write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
//output
Enter the value of n: 2
Numbers from 1 to 2 are:
1 2
