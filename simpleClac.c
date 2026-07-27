#include <stdio.h>
#include <stdlib.h>

// Function Prototypes
void handleAddition();
void handleSubtraction();
void handleDivision();
void handleMultiplication();

int main() {
    int choice;

    while (1) {
        // Display Menu
        printf("\n===================================\n");
        printf("       SIMPLE CALCULATOR MENU      \n");
        printf("===================================\n");
        printf("1. Addition (Sum of 4 numbers)\n");
        printf("2. Subtraction (Difference of 2 numbers)\n");
        printf("3. Division (2 numbers)\n");
        printf("4. Multiplication (4 numbers)\n");
        printf("5. Exit\n");
        printf("===================================\n");
        printf("Enter your choice (1-5): ");
        
        // Validate that user enters an integer
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number between 1 and 5.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        printf("\n");

        switch (choice) {
            case 1:
                handleAddition();
                break;
            case 2:
                handleSubtraction();
                break;
            case 3:
                handleDivision();
                break;
            case 4:
                handleMultiplication();
                break;
            case 5:
                printf("Exiting Calculator. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice! Please select an option from 1 to 5.\n");
        }
    }

    return 0;
}

// i) Addition (Sum of 4 numbers)
void handleAddition() {
    double n1, n2, n3, n4, sum;
    printf("--- Addition (4 Numbers) ---\n");
    printf("Enter four numbers separated by spaces: ");
    if (scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4) == 4) {
        sum = n1 + n2 + n3 + n4;
        printf("Result: %.2f + %.2f + %.2f + %.2f = %.2f\n", n1, n2, n3, n4, sum);
    } else {
        printf("Error: Invalid numeric input.\n");
        while (getchar() != '\n');
    }
}

// ii) Subtraction (Difference of two numbers)
void handleSubtraction() {
    double n1, n2, diff;
    printf("--- Subtraction (2 Numbers) ---\n");
    printf("Enter the first number (minuend): ");
    scanf("%lf", &n1);
    printf("Enter the second number to subtract (subtrahend): ");
    scanf("%lf", &n2);
    
    diff = n1 - n2;
    printf("Result: %.2f - %.2f = %.2f\n", n1, n2, diff);
}

// iii) Division (2 numbers)
void handleDivision() {
    double n1, n2, quotient;
    printf("--- Division (2 Numbers) ---\n");
    printf("Enter the dividend (number to divide): ");
    scanf("%lf", &n1);
    printf("Enter the divisor (number to divide by): ");
    scanf("%lf", &n2);

    // Safeguard against division by zero
    if (n2 == 0) {
        printf("Error: Division by zero is undefined!\n");
    } else {
        quotient = n1 / n2;
        printf("Result: %.2f / %.2f = %.2f\n", n1, n2, quotient);
    }
}

// iv) Multiplication (4 numbers)
void handleMultiplication() {
    double n1, n2, n3, n4, product;
    printf("--- Multiplication (4 Numbers) ---\n");
    printf("Enter four numbers separated by spaces: ");
    if (scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4) == 4) {
        product = n1 * n2 * n3 * n4;
        printf("Result: %.2f * %.2f * %.2f * %.2f = %.2f\n", n1, n2, n3, n4, product);
    } else {
        printf("Error: Invalid numeric input.\n");
        while (getchar() != '\n');
    }
}