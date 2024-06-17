// Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.

#include<stdio.h>
int main(){
    float salary, HRA, DA, TA;  
    printf("Enter your salary : ");
    scanf("%f", &salary);

    HRA = (salary * 10) / 100;
    DA = (salary * 5) / 100;
    TA = (salary * 8) / 100;

    float gross_salary = salary + HRA + DA + TA;

    printf("Your gross salary : %f", gross_salary);
    return 0;
}