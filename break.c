// for and if statement with break

#include<stdio.h>

int main(){
    int i; 

    printf("Numbers from 1 to 10, stopping at 5: \n");
    for(i=1; i<=10; i++)
    {
        if(i==8)
        {// continue skips 8 and goes to the next number
        continue;   // we can use break to stop the loop as soon as it hits 8 
        }
        printf("%d\n", i);
    }
    printf("\nLoop terminated.\n");
    return 0;
}