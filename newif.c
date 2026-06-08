// If sample

#include<stdio.h>

int main(){

    int age;

    printf("Enter age:");
    scanf("%d", &age);

    if (age<18){
    
        printf("Not eligible for voting\n");
    }else{
    
        printf("You can successfully participate in the general elections\n");
    }
    
    return 0;
}