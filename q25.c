//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Input numbers and operator
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c to ignore newline

    switch(op) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %d\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result = %d\n", num1 % num2);
            else
                printf("Error! Modulus by zero.\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
//output
Enter first number: 15
Enter second number: 25
Enter operator (+, -, *, /, %): +
Result = 40
Enter first number: 20
Enter second number: 2
Enter operator (+, -, *, /, %): -
Result = 18
Enter first number: 12
Enter second number: 50
Enter operator (+, -, *, /, %): /
Result = 0
Enter first number: 50
Enter second number: 40
Enter operator (+, -, *, /, %): %
Result = 10