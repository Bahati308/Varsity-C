// This identifies the month of the year from the number entered

#include <stdio.h>

int main(){
    int number;
    printf("Enter number from 1 to 12:");
    scanf("%d", &number);

    switch (number)
    {
        case 1:
        printf("January\n");
        break;

        case 2:
    printf("February\n");
    break;

    case 3:
    printf("March\n");
    break;

    case 4:
    printf("April\n");
    break;

    case 5:
    printf("May\n");
    break;
    
    case 6:
    printf("June\n");
    break;

    case 7:
    printf("July\n");
    break;

    default:
    printf("invalid Month\n");
        break;
    }

    return 0;
}