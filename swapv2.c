// this is an improverd version of swap.c

#include <stdio.h>

int main(){
    int a=2, b=3;

    printf("Before swapping we have:\n");
    printf("Value of a before swap: %d\n", a);
    printf("Value of b before swap: %d\n", b);

    printf("After swapping we have:\n");
    a = a + b; // now a = 5
    b = a - b; //now b = 5-3=2
    a = a - b; // now a = 5-2=3
    
    printf("Value of a after swap: %d\n", a);
    printf("Value of b after swap: %d\n", b);

    return 0;
}
