#include<stdio.h>

int main() {
    int score;
    char grade;

printf("Name: Chris Vincent Abelo\n");
    printf("ID Number: 2025306700\n");
    printf("----------------------------------------\n");
    
    printf("--- Conditional Logic Case Problem: Grading System ---\n");
    printf("Enter the student's grade: ");
    
    if (scanf("%d", &score) != 1) {
        printf("Result: Invalid input. Please enter a number.\n");
        return 1; // Exit with an error code
    }
    if (score < 0 || score > 100) {
        printf("Result: Error! Score must be between 0 and 100.\n");
        return 1;
    }
    if (score >= 90) {
        printf("passed");
    } else if (score >= 80) {
        printf("passed");
    } else if (score >= 75) {
        printf("passed");
    } else if (score < 75) {
        printf("Failed");
    }

    return 0; 
}