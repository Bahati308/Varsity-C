#include<stdio.h>
//Functions fir temperature conversion
double celsiusToFah(double celsius){
    return (celsius*1.8)+32;
}
double fahToCelsius(double fah){
    return (fah-32)/1.8;
}
int main(){
    int choiceNum;
    double tempToConvert;
    printf("********** TEMPERATURE CONVERSION RESULTS ************\n\n");
    printf("Type 1 to convert to Fahrenheit\n");
    printf("Type 2 to convert to Celsius\n");
    printf("*******************************************************\n");
    printf("Enter Your choice: ");
    scanf("%d",&choiceNum);
    switch(choiceNum){
        case 1:
            printf("Enter temperature to convert: ");
            scanf("%f", &tempToConvert);
            printf("%.1f C = %.1f F\n", tempToConvert, celsiusToFah(tempToConvert));
            break;
        case 2:
            printf("Enter temperature to convert: ");
            scanf("%f", &tempToConvert);
            printf("%.1f F = %.1f C\n", tempToConvert, fahToCelsius(tempToConvert));
            break;
        default:
            printf("Invalid Choice. Enter 1 or 2");
    }
    return 0;
}