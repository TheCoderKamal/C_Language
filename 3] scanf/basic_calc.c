// 3.Ask for four numbers and perform addition: print sum then multiply by 5 and divide by 2.

#include<stdio.h>
int main(){
    float number_1, number_2, number_3, number_4;
    

    printf("Enter first number : ");
    scanf("%f",&number_1);

    printf("Enter second number : ");
    scanf("%f",&number_2);

    printf("Enter third number : ");
    scanf("%f",&number_3);

    printf("Enter fourth number : ");
    scanf("%f",&number_4);

    float sum = number_1 + number_2 + number_3 + number_4;

    printf("\nSum = %f\n", sum);
    printf("Multiply by 5 = %f\n", sum*5);
    printf("Divide by 2 = %f\n", sum/2);
    return 0;
}