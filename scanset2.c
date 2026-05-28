// This is another example of scanset

#include<stdio.h>

int main(){
    char str[20]; //Specify number of characters
    printf("Enter your name in capital letters: ");
    scanf("%[A-Z]\n", str); // this scanset accepts uppercase input only


    printf("Thank you %s\n", str);
    return 0;
}