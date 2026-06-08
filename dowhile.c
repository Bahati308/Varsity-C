// this demonstrates the do while loop

#include<stdio.h>

int main(){
    int sum = 0;

    int i=1;
    do
    {
        sum = sum + i;
        printf("%d",sum);
    } while (i<=5);
    
    return 0;
}