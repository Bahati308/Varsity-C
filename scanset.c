// Using scanset 

#include<stdio.h>

int main(){
    char str[10];
    //Read string from the user

    scanf("%[^\n]", str);

    //Print the string
    printf("%s", str);
    return 0;
}