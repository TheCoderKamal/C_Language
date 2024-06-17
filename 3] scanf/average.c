// 5.Calculate the average of three grades: take input from user and print average.

#include<stdio.h>
int main(){
    float number_1, number_2, number_3;

    printf("Enter the first number: ");
    scanf("%f", &number_1);

    printf("Enter the second number: ");
    scanf("%f", &number_2);

    printf("Enter the third number: ");
    scanf("%f", &number_3);

    float sum = number_1 + number_2 + number_3;
    float average = sum / 3;

    printf("The average of the three numbers is: %.2f\n", average);
    return 0;
}