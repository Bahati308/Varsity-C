#include <stdio.h>

int main() {
    double num1, num2;
    double sum, diff, product, quotient;
    int mod_result;

    // 1. Take inputs from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // 2. Perform basic arithmetic operations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;

    // 3. Print the results for basic operations
    printf("\n--- Arithmetic Results ---\n");
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, sum);
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, diff);
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, product);

    // 4. Handle division by zero edge case
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, quotient);
    } else {
        printf("%.2lf / %.2lf = Undefined (Cannot divide by zero)\n", num1, num2);
    }

    // 5. Handle Modulus (requires integers in C)
    // We cast the double variables to int to perform the % operation
    if ((int)num2 != 0) {
        mod_result = (int)num1 % (int)num2;
        printf("%d %% %d = %d (Integer Modulus)\n", (int)num1, (int)num2, mod_result);
    } else {
        printf("%d %% %d = Undefined (Cannot divide by zero)\n", (int)num1, (int)num2);
    }

    return 0;
}