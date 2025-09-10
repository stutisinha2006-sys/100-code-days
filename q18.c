//write a program that accepts percentage (0-100) and assigns grades based on the following criteria//
//90-100: grade A 
//80-89: grade B
//70-79: grade C
//60-69: grade D
//below 60: grade F//
#include <stdio.h>

int main() {
    int percentage;

    // Input percentage
    printf("Enter your percentage (0-100): ");
    scanf("%d", &percentage);

    // Check validity
    if (percentage < 0 || percentage > 100) {
        printf("Invalid input! Percentage must be between 0 and 100.\n");
    } 
    else {
        // Assign grade based on criteria
        if (percentage >= 90 && percentage <= 100) {
            printf("Grade A\n");
        } 
        else if (percentage >= 80 && percentage <= 89) {
            printf("Grade B\n");
        } 
        else if (percentage >= 70 && percentage <= 79) {
            printf("Grade C\n");
        } 
        else if (percentage >= 60 && percentage <= 69) {
            printf("Grade D\n");
        } 
        else {
            printf("Grade F\n");
        }
    }

    return 0;
}
//output
Enter your percentage (0-100): 70
Grade C
