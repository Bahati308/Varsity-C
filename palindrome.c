// Palindrome Checker
#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = (reversedNum * 10) + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int num;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (isPalindrome(num)) {
        printf("%d is a PALINDROME number.\n", num);
    } else {
        printf("%d is NOT a palindrome number.\n", num);
    }

    return 0;
}