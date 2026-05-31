// this is a revised version of for loop

#include<stdio.h>

int main(){
    int sum = 0;

    for (int i=1; i<=15; i++)
    {
        sum = sum+i;
        printf("The sum of the first 5 natural numbers is: %d\n",sum);
        if (i==7)
        {
            continue;
        }
        
    }
  return 0;  
}