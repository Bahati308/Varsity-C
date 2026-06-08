// Ca;culating the gross salary 

#include<stdio.h>

int main(){
    float salary;
    const int threshold_salary=1500000;
    const int tax2 = 200000;
    const float tax1=0.1, allowance1= 0.4, allowance2=0.6;

    printf("Enter salary: ");
    scanf("%f", &salary);

    if(salary<threshold_salary){
        salary = (salary-(salary*tax1))+(salary*allowance1);
        printf("Gross Salary is: %f\n", salary);
    }else{
        salary = (salary-tax2)+(salary*allowance2);
        printf("Gross Salary is: %f\n", salary);
    }
    
    return 0;
}