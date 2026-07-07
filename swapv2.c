#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer (a): ");
    scanf("%d", &a);
    printf("Enter second integer (b): ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping logic using arithmetic
    a = a + b; // 'a' now holds the sum of both numbers
    b = a - b; // Subtracting 'b' from the sum gives the original 'a'
    a = a - b; // Subtracting the new 'b' from the sum gives the original 'b'

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}