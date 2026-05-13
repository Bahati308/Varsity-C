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
}

float minus(float a, float b){
    return a-b;
}

float multiply(float a, float b){
    return a*b;
}

float divide(float a, float b){
    return a/b;
}

int main(){
    int choice;
    float a, b;
    
    displayMenu();
    if(scanf("%d", &choice) != 1){
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    if(choice < 1 || choice > 5){
        printf("Invalid choice. Please enter a number between 1 and 5.\n");
        return 1;
    }

    if(choice != 5){
        printf("Enter first number: ");
        scanf("%f", &a);
        printf("Enter second number: ");
        scanf("%f", &b);
    }

    switch(choice){
        case 1: {
            float result = add(a,b);
            printf("The answer is: %.3f\n", result);
            break;
        }
        case 2: {
            float result2 = minus(a,b);
            printf("The answer is: %.3f\n", result2);
            break;
        }
        case 3: {
            float result3 = multiply(a, b);
            printf("The answer is: %.3f\n", result3);
            break;
        }
        case 4: {
            float result4 = divide(a,b);
            printf("The answer is: %.3f\n", result4);
            break;
        }
        case 5:
            printf("Exiting calculator. Goodbye!\n");
            break;
        default:
            printf("Entered an invalid number\n");
    }
    
    return 0;
}