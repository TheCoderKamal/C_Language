// 2 Write a C program that calculates the product of two numbers using the * operator. Input two numbers, multiply them, and print the result.

#include<stdio.h>
int main(){

    float number_1, number_2;

    printf("Enter first number : ");
    scanf("%f",&number_1);

    printf("Enter second number : ");
    scanf("%f",&number_2);

    float answer = number_1 * number_2;
    printf("%.2f * %.2f = %.2f\n",number_1, number_2, answer);
    return 0;
}