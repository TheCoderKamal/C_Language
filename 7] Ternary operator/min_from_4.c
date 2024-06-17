// Write a Program to find the minimum number from the given 4 numbers using the ternary operator.

#include<stdio.h>
int main(){
    float number_1, number_2, number_3, number_4;
    printf("Enter the first number: ");
    scanf("%f", &number_1);

    printf("Enter the second number: ");
    scanf("%f", &number_2);

    printf("Enter the third number: ");
    scanf("%f", &number_3);

    printf("Enter the fourth number: ");
    scanf("%f", &number_4);

    float minimum = (number_1 < number_2 && number_1 < number_3 && number_1 < number_4)? number_1 : (number_2 < number_3 && number_2 < number_4)? number_2 : (number_3 < number_4)? number_3 : number_4;

    printf("The minimum number : %f", minimum);
    return 0;
}