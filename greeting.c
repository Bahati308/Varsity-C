// This program asks user name and greets them 

#include <stdio.h>

int main(){
    char name[50];
    printf("Hello, please enter your name:");
    scanf("%s", name);
    printf("Hello Sir/Madam %s\n", name);
    return 0;
}