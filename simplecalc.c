// This is a simple calculator program
#include <stdio.h>

//Function declaration
void displayMenu(){
    printf("============================== \n");
    printf("       SIMPLE CALCULATOR       \n");
    printf("============================== \n");
    printf("   1. ADDITION        (+) \n");
    printf("   2. SUBTRACTION     (-) \n");
    printf("   3. MULTIPLICATION  (*) \n");
    printf("   4. DIVISION        (/) \n");
    printf("   5. EXIT\n");
    printf("Enter your choice (1-5):");
}
float add(float a, float b){
    return a+b;
    printf("Enter first number:\n");
        scanf("%f", &a);
        printf("Enter second number:\n");
        scanf("%f", &b);
}
float minus(float a, float b){
    return a-b;
    printf("Enter first number:\n");
        scanf("%f", &a);
        printf("Enter second number:\n");
        scanf("%f", &b);
}
float multiply(float a, float b){
    return a*b;
    printf("Enter first number:\n");
        scanf("%f", &a);
        printf("Enter second number:\n");
        scanf("%f", &b);
}
float divide(float a, float b){
    return a/b;
    printf("Enter first number:\n");
        scanf("%f", &a);
        printf("Enter second number:\n");
        scanf("%f", &b);
}

int main(){
    int choice,a,b;
    
    displayMenu();
    scanf("%d", &choice);

    switch(choice){
        case 1:
        float result = add(a,b);
        printf("The answer is: %.3f\n", result);
        break;

        case 2:
        float result2 = minus(a,b);
        printf("The answer is: %.3f\n", result);
        break;

        case 3:
        float result3 = multiply(a, b);
        printf("The answer is: %.3f\n", result);
        break;

        case 4:
        float result4 = divide(a,b);
        printf("The answer is: %.3f\n", result);
        break;

        default:
        printf("Entered an invalid number\n");
    }
    
    return 0;
}