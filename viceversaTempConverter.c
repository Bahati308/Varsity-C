//Written by Brian Patrick Bahati on July 14, 2026
#include <stdio.h>

//Functions for temperature convertion
double celsiusToFah(double celsius){
    return (celsius*1.8)+32.0;
}

double fahToCelsius(double fahr){
    return (fahr-32)/1.8;
}

//Main function
int main(){

    double c1 = 45.0;
    double c2 = 27.3;
    double f1 = 95.0;
    double f2 = 32.0;
    printf("\n======== TEMPERATURE CONVERTER =========\n\n");

    //a) 45.0 C 
    printf("a) %.1f C = %.1f F\n", c1, celsiusToFah(c1));

    // b) 27.3 C
    printf("b) %.1f C = %.1f F\n", c2, celsiusToFah(c2)); 

    //c) 95.0 F 
    printf("c) %.1f F = %.1f C\n", f1, fahToCelsius(f1));

    //d) 32.0 F
    printf("d) %.1f F = %.1f C\n", f2, fahToCelsius(f2));

    return 0;
}