//  Write a Program to convert temperature from degrees Celsius to Fahrenheit.

#include<stdio.h>
int main(){

    float Celsius;

    printf("Enter the temperature in the form of degrees Celsius : ");
    scanf("%f",&Celsius);

    float fahrenheit = (Celsius * 1.8) + 32;

    printf("The temperature in fahrenheit : %f", fahrenheit);

    return 0;
}