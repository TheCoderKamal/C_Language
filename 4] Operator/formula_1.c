// Write a Program to find the formula's answer (x+y)*3

#include<stdio.h>
int main(){

    float x,y;

    printf("Enter the value of x: ");
    scanf("%f",&x);

    printf("Enter the value of y: ");
    scanf("%f",&y);

    float answer = (x + y) * 3;

    printf("The answer is: %f\n",answer);
    return 0;
}