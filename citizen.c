/*
This program groups citizens according to their age
It uses if-else statements to determine the category of the citizen based on the age input by the user. The categories are:
*/ 

#include <stdio.h>

int main(){

    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);
    
        if(age < 18){
            printf("You are %d years therefore a kid\n", age);
            }

        else if(age < 60){
            printf("You are %d years therefore an adult\n", age);
        }
        else
        {
            printf("You are %d years therefore a mzee\n", age);
        }
         
    return 0;
}