// This is an intro to functions

#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int main()
{
    int result = add(30, 20);
    printf("Sum is: %d\n", result);
    return 0;
}
