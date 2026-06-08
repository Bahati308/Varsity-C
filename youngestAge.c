// This program compares three ages and determines the youngest

#include<stdio.h>

int main(){

    int age1, age2, age3;

    printf("Enter Rohan's age: ");
    scanf("%d", &age1);
    printf("Enter Patel's age: ");
    scanf("%d", &age2);
    printf("Enter Pradeep's age: ");
    scanf("%d", &age3);
    if (age1<age2&&age3)
    {
        printf("Rohan is youngest\n");
    }else if (age2<age3&&age1)
        {
            printf("Patel is youngest\n");
        }
    else
        {
            printf("Pradeep is youngest\n");
        }
        
    return 0;
}