// determining the status of the business

#include<stdio.h>

int main(){

    float buying_price, selling_price, loss, profit;

    printf("Enter buying price: ");
    scanf("%f", &buying_price);
    printf("Enter selling price: ");
    scanf("%f", &selling_price);

    profit= selling_price-buying_price;

    if (profit>0)
    {
        printf("You made profits of %f\n",profit);
    }else
    {
        printf("You made a loss of %f\n",profit);
    }
    
    
    return 0;
}