// This gets input from the user
#include <stdio.h>
int main(){
    float height;
    float mass;
    float bmi;
    
    printf("Please enter your height in cm:");
    scanf("%f", &height);
    printf("Please enter your mass in kg:");
    scanf("%f", &mass);
    bmi = height/mass;
    printf("Your BMI is %.2f\n", bmi);

    return 0;
}