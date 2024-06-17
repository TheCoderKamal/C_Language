// Write a Program to find the minimum number from the given 2 numbers using if else.

#include<stdio.h>
int main(){
    float number_1, number_2;
    printf("Enter first number : ");
    scanf("%f",&number_1);

    printf("Enter second number : ");
    scanf("%f",&number_2);

    if(number_1 >= number_2){
        printf("%f is greater than or equals to %f", number_1, number_2);
    }
    else{
        printf("%f is greater than or equals to %f", number_2, number_1);
    }

    return 0;
}