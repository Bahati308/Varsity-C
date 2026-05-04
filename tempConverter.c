// This program converts from Fahrenheit to Celsius

#include <stdio.h>

int main(){
    float fahrenheit, celcius;
      
    printf("Please enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celcius = (5.0/9.0)*(fahrenheit-32.0); 
    printf("the result is: %.2f degrees\n", celcius);

    return 0;
}