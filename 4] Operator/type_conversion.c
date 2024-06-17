// Using type conversion add 4 numbers take float values and print answer as integer.

#include<stdio.h>
int main(){

    float number_1, number_2, number_3, number_4;

    printf("Enter the first number : ");
    scanf("%f", &number_1);

    printf("Enter the second number : ");
    scanf("%f", &number_2);

    printf("Enter the third number : ");
    scanf("%f", &number_3);

    printf("Enter the fourth number : ");
    scanf("%f", &number_4);

    float sum = number_1 + number_2 + number_3 + number_4;

    printf("The sum of the four numbers is : %d", (int)sum);
    return 0;
}