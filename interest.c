/* 
This program calculates the simple interest based on the principal amount,
rate of interest, and time period. 
 */

 #include <stdio.h>

 int main() {
    float principal, rate, time, interest;

    // Get user input for principal, rate, and time
    printf("Please enter the principal amount:");
    scanf("%f", &principal);
    printf("Please enter the interest rate:");
    scanf("%f", &rate);
    printf("Please enter the time:");
    scanf("%f", &time);

    // Calculate SI = (P * R * T) / 100
    interest = (principal * rate * time) / 100;
    // Output the result
    printf("The simple interest is: %.2f\n", interest);
    return 0;
 }